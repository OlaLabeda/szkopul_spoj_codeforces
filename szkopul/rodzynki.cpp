#include <bits/stdc++.h>
using namespace std;
constexpr int MAXS=55, MAXVAL=1007;
int r, c; //row, column
int chocolate[MAXS][MAXS];//dane z wejscia - ile rodzynek na kazdej czastce
int raisins[MAXS][MAXS]; //prefix sums
int best[MAXS][MAXS][MAXS][MAXS];//minimalny koszt za dany prostokat


int solve(int r1, int c1, int r2, int c2)// najmniejszy koszt pociecia porcji czekolady na prostokacie z (r1, c1) do (r2, c2)
{
    if(best[r1][c1][r2][c2]==-1) //memoization - jezeli nie wypelnione do tej pory pole => dzialaj
    {
        if (r1==r2 && c1==c2) //ten sam rzad, ta sama kolumna = > pojedynce pole, brak kosztow za podzial
            best[r1][c1][r2][c2]=0;
        else //probujemy wszytskie mozliwe ciecia i szukamy minimalnego kosztu
        {
            int bestpayment=INT_MAX;
            //rzedy:
            for (int r = r1+1; r<=r2; r++)
            {
                int payment = solve(r1, c1, r-1, c2)+solve(r, c1, r2, c2); //tworze jakbgy 2 nowe prostokaty
                //jeden ma prawy dolny rog w r-1, a drugi w lewy dolny w r
                bestpayment=min(bestpayment, payment);
            }
            //kolumny
            for (int c=c1+1; c<=c2; c++)
            {
                int payment=solve(r1, c1, r2, c-1)+solve(r1, c, r2, c2);
                //znowu, 2 nowe prostokaty, jeden ma prawy dolnyy rog w c-1, a drugi ma lewy gorny w c
                bestpayment=min(bestpayment, payment);
            }
            //okresl liczbe rodzynek
            int baseraisins =raisins[r2][c2]; //prefiks z calego prostokata
            baseraisins+=raisins[r1-1][c1-1]-raisins[r2][c1 - 1]-raisins[r1-1][c2];
            best[r1][c1][r2][c2]=bestpayment+baseraisins;
        }
    }
    return best[r1][c1][r2][c2];
}
int main ()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>r>>c;
    for (int i =1; i<=r; i++)
        for (int j =1; j<=c; j++)
            cin>>chocolate[i][j];
    memset(raisins, -1, sizeof(raisins));
    memset(best, -1, sizeof(best));

    //sumy prefiksowe
    for (int i = 0; i <=r; i++)
        for (int j =0; j<=c; j++)
            {
                if (i==0||j==0)
                    raisins[i][j]=0;
                else
                    raisins[i][j]=raisins[i-1][j]+raisins[i][j-1]+chocolate[i][j]-raisins[i-1][j-1];
            }

    // minimalny koszt za pociecie calej czekolady
    cout << solve(1, 1, r, c) << endl;

    return 0;
}