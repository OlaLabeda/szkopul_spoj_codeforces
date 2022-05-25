#include <iostream>
using namespace std;
int dp[3007][3007];
int n; string s;
void szczup ()
{
    for (int k =0; k<n; k++)
    {
        for (int i =0; i+k<n; i++)
        {
            int j=i+k;
            if (i==j) dp[i][j]=1;
            else if (s[i]==s[j]) dp[i][j]=2+dp[i+1][j-1];
            else dp[i][j]=max(dp[i][j-1], dp[i+1][j]);
        }
    }
    cout << dp[0][n-1];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>s;
    szczup();

}