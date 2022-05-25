#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
long long  r[600007];
long long int k[600007];
pair<long long, long long int> p[500007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>r[i]>>k[i];
       p[i].second=r[i]/k[i];
       p[i].first=r[i];
       //cout << p[i]<< endl;
    }
    sort(p, p+n+1);
    int ile=1, po=n;
    for (int i =n-1; i>=1; i--)
    {
        //cout << po<< endl;
        if (p[po].second>=p[i].first)
        { po=i; ile++;}
        if (p[i].second>p[po].second) po = i;
    }

   cout << ile;
}