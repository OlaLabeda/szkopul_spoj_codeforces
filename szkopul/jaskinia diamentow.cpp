#include <iostream>
using namespace std;
long long int tab[1007][1007];
void akt (int n, int m)
{
    for (int i =1; i<=n; i++)
        for (int j =1; j<=m; j++)
        tab[i][j]=tab[i][j]-tab[i-1][j-1]+tab[i-1][j]+tab[i][j-1];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n, m;
    cin>>n>>m;
    for (int i =1; i<=n; i++)
        for (int j =1; j<=m; j++)
        cin>>tab[i][j];
    akt (n, m);
    int k;
    cin>>k;
    int x1, y1, x2, y2;
    long long maks=0;
    for (int i =1; i<=k; i++)
        {cin>>x1>>y1>>x2>>y2;
        maks=max(maks,tab[x2][y2]-tab[x1-1][y2]-tab[x2][y1-1]+tab[x1-1][y1-1] );}
    cout << maks;

}