#include <iostream>
#include <algorithm>
using namespace std;
int tab[31000];
int main ()
{
    int n, maks=0;
    cin>>n;
    int o=0, g=2;
    for (int i =0; i<n; i++)
        cin>>tab[i];
    sort (tab, tab+n);
    while (g<n)
    {
        if (g-o<2)
            g++;
        if (tab[o]+tab[o+1]> tab[g])
        {
            maks=max(maks, g-o+1);
            g++;
        }
        else o++;
    }
cout << maks;
}
