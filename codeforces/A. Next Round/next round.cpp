#include <iostream>
using namespace std;
 int binary (int x,int tab[], int target)
{
    int pocz=0, kon=x-1, srodek = (pocz+kon)/2, zwrot=0;
    while (pocz<=kon)
    {srodek = (pocz+kon)/2;
        if (tab[srodek]==target)
           {
            pocz=srodek+1;
            zwrot  = srodek;}
            else if (tab[srodek]>target)
                pocz=srodek+1;
            else kon = srodek-1;
 
    }
    return zwrot;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin>>n>>k;  int tab[n];
 
    for ( int i =0; i< n;i++)
        cin>>tab[i];
 
    int licznik =0;
    if  (tab[k-1]==0)
    {
            for ( int i =0; i< k; i++)
            {
                if (tab[i]>0)
                    licznik++;
            }
cout << licznik;
       }
 
    else cout << binary (n,tab, tab[k-1])+1;
 
    }
