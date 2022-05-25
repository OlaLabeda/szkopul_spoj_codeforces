#include <iostream>
#include <cmath>
using namespace std;
int binary (int arr[], int l, int r, int target)
{
    int x=0;
while (l<=r)
{int mid= l+(r-l)/2;
if (arr[mid]>=target)
{
    l=mid+1;
    x = mid;
}
else {r =mid-1;
}
}
if (x!=0)
return x;
else return -1;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    int n, m;cin>>n>>m;
    int r[n], k[n];

    for (int i =0; i<n; i++)
        cin>>r[i];
    for (int i = 0; i<m; i++)
        cin>> k[i];

int pom[n];
pom[0]=r[0];
for (int i =1; i<n; i++)
{
    pom[i]=min(r[i], pom[i-1]);
}
int temp=n-1;
int wyn;
for (int i =0; i<m; i++)
{
wyn = binary(pom, 0, temp, k[i]);
temp = wyn-1;
if (wyn ==0)
    break;
}
if (wyn!=-1)
cout << wyn+1;
else cout<<0;

}