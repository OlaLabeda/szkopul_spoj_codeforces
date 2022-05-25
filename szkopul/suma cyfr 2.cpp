#include <iostream>
using namespace std;
int tab[500007];
int n;
int dp[500007];
long long fun (int x)
{
    if (x<=0) return 0;
    if (dp[x]>0) return dp[x];
    return dp[x] = max (tab[x]+fun(x-1), 9+tab[x-1]+fun(x-2));

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin>>n;
    for (int i =1; i<=n; i++)
       cin>>tab[i];
       cout << fun (n);
}