#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
pair<long long, long long> p[1000007];
long long c[1000007];
int main ()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n, d, t;
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>d>>t;
        p[i].second=d;
        p[i].first=t;
    }
    sort (p, p+n+1);
    c[n]=p[n].first-p[n].second;
    for (int i =n-1; i>=1; i--)
    {
        c[i]=min(c[i+1], p[i].first)-p[i].second;
       // cout << c[i]<< endl;
    }
    cout << c[1];
}