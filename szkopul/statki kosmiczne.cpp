#include <iostream>
#include <algorithm>
using namespace std;
long long g[4], tab[4][1010];
int n[4];
void wyj(int x)
{
    cin>>n[x];
    for (int i =1; i<=n[x];i++)
    {
        cin>>tab[x][i];
        tab[x][i]*=g[x];
    }
    sort (tab[x]+1, tab[x]+n[x]+1);
    return;

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int wyn=0, k;
    long long maks=0;
    cin>>g[1]>>g[2]>>g[3];
    for (int i =1; i<=3; i++)
        wyj(i);
    maks=(tab[1][n[1]]+tab[2][n[2]]+tab[3][n[3]])/2;
    for (int i =1; i<=n[1];i++)
    {
        k=n[3];
        for (int j =1; j<=n[2]; j++)
        {
            while (k>0 &&(tab[1][i]+tab[2][j]+tab[3][k]>maks))
            k--;
            wyn+=(n[3]-k);
        }
    }
    cout << wyn;

}