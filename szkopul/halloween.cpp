#include <iostream>
using namespace std;
int c[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int t, n, x, y;
    cin>>t>>n;
    for (int i =1; i<=n; i++)
        {cin>> c[i]; c[i]+=c[i-1];}
    for (int i =1; i<=t; i++)
    {
    cin>>x>>y;
    cout << c[y]-c[x-1]<< "\n";
    }
}