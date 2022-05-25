#include <bits/stdc++.h>
using namespace std;
int dp[55][55];
int maks=0;
int n, m;
void kwadrat ()
{
    for (int i =1; i<=n; i++)
        if (dp[1][i]==0) dp[1][i]=1;
        else dp[1][i]=0;
    for (int i =2; i<=m; i++)
        if (dp[i][1]==0) dp[i][1]=1;
        else dp[i][1]=0;
     for (int  i=2; i<=m; i++)
    {
        for (int j =2; j<=n; j++)
          {
              if (dp[i][j]==1) dp[i][j]=0;
              else
              dp[i][j]=min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1])+1;
              maks=max(dp[i][j], maks);
          }
    }
    cout << (long long)maks*maks<< endl;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    int ile;
    cin>>ile;
    for (int i =1; i<=ile; i++)
    {
        int x, y;
        cin>>x>>y;
        dp[y][x]=1;
    }
    kwadrat();
}