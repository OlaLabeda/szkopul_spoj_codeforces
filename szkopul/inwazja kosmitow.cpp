#include <bits/stdc++.h>
using namespace std;
constexpr int MAXN=1e6+7;
long long miasta[MAXN];
int n;
long long dp[MAXN];
int main ()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n;
    cin>>miasta[1];
    dp[1]=miasta[1];
    for (int i =2; i<=n; i++)
        {
            cin>>miasta[i];
            dp[i]=max(dp[i-2]+miasta[i], dp[i-1]);
        }
cout << dp[n];

}