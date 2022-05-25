#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int tab[n];
    for (int i =0; i<n;i++)
    {
        cin>>tab[i];
    }
    sort(tab, tab+n);
    int g=2;
    int o=0;
    int maks=0;
    while(g<n)
    {
        if (o+2>g)
            g++;
        if (tab[o]+tab[o+1]>tab[g])
        {
            maks=max(maks, g-o+1);
            g++;

        }
        else o++;
    }
    cout << maks;

}