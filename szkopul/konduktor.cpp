#include <bits/stdc++.h>
using namespace std;
const int  MAXN=607, MAXK=57, INF=2e9+7;
int n, k, maksi;
int stacje[MAXN][MAXN], dp[MAXN][MAXN],
    pref[MAXN][MAXN], poprz[MAXN][MAXK];
vector<int> wyn;
int main ()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //wejscie
    cin>>n>>k;
    for (int i =1; i<=n; i++)
        for (int j =i+1; j<=n; j++)
            cin>>stacje[i][j];
    //sumy prefiksowe => ile pasazerow wysiadlo lacznie do j
    for (int i = 1; i<=n; i++)
        for (int j =1; j<=n; j++)
            pref[i][j]=stacje[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
    //dla poprawnosci obliczen:
    for (int i =1; i<=k; i++)
        dp[0][i]=-INF;


    //dynamik => ile osob lacznie skontrolujemy
    for (int i =1; i<n; i++)
        for (int kon=1; kon<=k; kon++)
            for (int j =i-1; j>=0; j--)
            {
                //liczba sprawdzaonych pasazerow lacznie
                int wyn=dp[j][kon-1]+pref[i][n]+pref[j][i]-pref[j][n]-pref[i][i];
                if (wyn>dp[i][kon])
                {
                    dp[i][kon]=wyn;
                    poprz[i][kon]=j; //zapamietujemy na ktorej stacji byla poprzednia optymalna kontrola
                }
            }
    //odzyskiwanie wyniku
    for (int i =1; i<=n; i++)
        if (dp[i][k]>dp[maksi][k])
            maksi=i;
    for (int i=k; i>0; i--)
    {
        wyn.push_back(maksi);
        maksi=poprz[maksi][i];
    }
    for (int i=wyn.size()-1; i>=0; i--)
        cout << wyn[i]<< " ";
    return 0;
}