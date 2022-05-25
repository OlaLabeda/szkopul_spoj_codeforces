#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int q, n, r, x, maks;
    cin>>q;
    for (int i =1; i<=q; i++)
    {
       cin>>n>>r;
       int tab[n+1];
        for (int i =1; i<=n; i++)
        {
            cin>>tab[i];
        }
        int sum=1;
        int odrzut=r;
        sort (tab+1, tab+n+1);
        for (int i =n-1; i>=1; i--)
        {
            if (tab[i]!=tab[i+1] && tab[i]-odrzut>0)
            {
                sum++;
                odrzut+=r;
            }
            else if (tab[i]-odrzut<=0)
                break;
        }
        cout << sum<< endl;
    }
}
