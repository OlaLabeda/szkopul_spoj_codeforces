#include<iostream>
#include<algorithm>
using namespace std;
int money[100005];
long long int bikes[100005];
int n,m;
long long int a;
int check(int mid)
{
	long long int sum=0;
	for(int i=0;i<mid;i++)
		if(bikes[mid-i-1]>money[n-i-1])
			sum+=bikes[mid-i-1]-money[n-i-1];
	if(sum>a) return 0;
	return 1;
}
int main()
{
	cin>>n>>m>>a;
	for(int i=0;i<n;i++)
		cin>>money[i];
	for(int i=0;i<m;i++)
		cin>>bikes[i];
	sort(money,money+n);
	sort(bikes,bikes+m);
 
	int l=0,r=min(n,m);
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	long long int sum=0;
	for(int i=0;i<r;i++)
		sum+=bikes[i];
	sum = max(0LL, sum-a);
	cout<<r<<" "<<sum<<endl;
	return 0;
}
