#include <iostream>
using namespace std;
int t, a, n;
const int M=1007;
int tlen[M], azot[M], waga[M];
int dp[23][83];
void pletwonurek()
{
    for (int i =0; i<=22; i++)
        for (int j =0; j<=82; j++)
            dp[i][j]=64000;
    dp[0][0]=0;
    int tpom, apom;
    for (int i =1; i<=n; i++)
        for (int j =t; j>=0; j--)
            for (int k=a; k>=0; k--)
            {
                tpom=min(j+tlen[i], t);
                apom=min(k+azot[i], a);
                dp[tpom][apom]=min(dp[tpom][apom], dp[j][k]+waga[i]);
            }
}
int main ()
{
    cin>>t>>a>>n;
    for (int i =1; i<=n; i++)
        cin>>tlen[i]>>azot[i]>>waga[i];
        pletwonurek();
        cout << dp[t][a];
}