#include <algorithm>
#include <iostream>
using namespace std;
const int MAXBOK = 1e3+7;
int basen [MAXBOK][MAXBOK];
int basen45[2*MAXBOK][2*MAXBOK];
long long int pref[2*MAXBOK][2*MAXBOK];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int bokbasenu, liczbaratownikow;

    int ratx, raty, zasieg, rat45x, rat45y, lgx, lgy, pdx, pdy;
    long long wynik;
    cin>>bokbasenu>>liczbaratownikow;
    int bokbasenudl=2*bokbasenu+5;
    for (int y =1; y<=bokbasenu; y++)
        for (int x =1; x<=bokbasenu; x++)
            cin>>basen[x][y];

    for (int y =1; y<=bokbasenu; y++)
        for (int x =1; x<=bokbasenu; x++)
            basen45[x-y+bokbasenu+1][y+x+1]=basen[x][y];

  for (int y =1; y<=bokbasenudl; y++)
        for (int x =1; x<=bokbasenudl; x++)
            pref[x][y]=pref[x-1][y]+pref[x][y-1]-pref[x-1][y-1]+(long long)basen45[x][y];

    for (int i =1; i<=liczbaratownikow;i++)
    {
        cin>>raty>>ratx>>zasieg;
        rat45x=ratx-raty+bokbasenu+1;
        rat45y=ratx+raty+1;
        pdx=min(rat45x+zasieg, bokbasenudl-1);
        pdy=min(rat45y+zasieg, bokbasenudl-1);
        lgx=max(rat45x-zasieg, 1);
        lgy=max(rat45y-zasieg, 1);
        wynik=pref[pdx][pdy]-pref[lgx-1][pdy]-pref[pdx][lgy-1]+pref[lgx-1][lgy-1];

    cout << wynik<< "\n";
    }


}
