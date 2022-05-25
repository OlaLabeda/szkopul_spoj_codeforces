#include <iostream>
#include <algorithm>
using namespace std;
long long int d[100007];
int binsearch (int z, int n)
{
    int p=0, k=n-1, mid;
    while(p<=k)
    {
        mid=p+(k-p)/2;
        if (d[mid]==z)
            return 1;
        else if (d[mid]< z)
            p=mid+1;
        else k=mid-1;
    }
    return 0;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n, p, z;
    cin>>n;
    for (int i =0; i<n; i++)
        {cin>>d[i]; d[i]+=d[i-1];}
    cin>>p;
    sort(d, d+n+1);
    for (int i =1; i<=p; i++)
    {
        cin>>z;
        if (binsearch(z, n))
            cout << "TAK\n";
        else cout << "NIE\n";
    }
}