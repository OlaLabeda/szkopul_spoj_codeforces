#include <iostream>
#include <algorithm>
using namespace std;
long long dp[10007];
int n, m;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin>>n>>m;
   long long x;
    for (int i =1; i<=n; i++)
        for (int j =1; j<=m; j++)
            {   cin>>x;
                if (i==1)
                    dp[j]=x+dp[j-1];
                else if (j==1)
                    dp[j]+=x;
                else dp[j]=max(dp[j], dp[j-1])+x;

            }
  cout << dp[m];
}