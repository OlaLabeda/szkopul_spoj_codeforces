#include <iostream>
using namespace std;
int n, k, s;
int dp[1000007];
int m[1000007];
int fun ()
{
    for (int i =1; i<=s; i++)
        dp[i]=-1;
    for (int i = 1; i<=n; i++)
        for (int j =s; j>=0; j--)
        {
            if (dp[j]==-1) continue;
            if (j+m[i]<=s && (dp[j+m[i]]==-1 ||(dp[j+m[i]]>dp[j] &&dp[j+m[i]]!=-1) ))
                dp[j+m[i]]=dp[j]+1;

        }
      for (int i =s; i>=1; i--)
        if (dp[i]!=-1 && dp[i]<=k)
          return i;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k>>s;
    for (int i=1; i<=n; i++)
        cin>>m[i];
      cout <<fun();
}