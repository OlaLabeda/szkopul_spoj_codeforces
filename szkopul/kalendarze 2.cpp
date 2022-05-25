#include <iostream>
using namespace std;
int arb[1000007];
int ban[1000007];
int mid, ans, dzien;
void binsearch (int x, int tab[], int s)
{
    ans = 0, dzien = 0;
    int l =1, r = s;
    while (l<=r)
    {
        mid = l+(r-l)/2;
        if (tab[mid]>=x && tab[mid-1]<x)
        {
             ans = mid;
            dzien = x-tab[mid-1];
            cout << dzien<< " "<< ans<<" \n";
            return;
        }
        if (tab[mid]>x)
            r=mid-1;
        else l=mid+1;
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, z, dz, mies, x;
    char kier;
    cin>>n>>m;
    for (int i =1; i<=n; i++)
        {cin>>arb[i]; arb[i]+=arb[i-1];}
    for (int i =1; i<=m; i++)
        {cin>>ban[i];   ban[i]+=ban[i-1];}
    cin>>z;
    for (int i =1; i<=z; i++)
    {
        cin>>dz>>mies>>kier;
        if (kier == 'A')
        {
            x = arb[mies-1]+dz;
            binsearch(x, ban, m);
        }
        else
        {
            x = ban[mies-1]+dz;
            binsearch(x, arb, n);
        }

    }
}
