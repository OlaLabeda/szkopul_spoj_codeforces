#include <iostream>
using namespace std;
string s1, s2;
int lev(int ss1, int ss2)
{
    int dp[ss1+1][ss2+1];
    for (int i =0; i<=ss1; i++)
        for (int j =0; j<=ss2; j++)
            dp[i][j]=0;
    for (int i =1; i<=ss1; i++)
        {dp[i][0]=i;}
    for (int i =1; i<=ss2; i++)
        dp[0][i]=i;
    for (int i =1; i<=ss1; i++)
        for (int j =1; j<=ss2; j++)
        {
            if (s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1])+1;
        }
    return dp[ss1][ss2];

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m>>s1>>s2;
    cout << lev(n, m)<< endl;
}