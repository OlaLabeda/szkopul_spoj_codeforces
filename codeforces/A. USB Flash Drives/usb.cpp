#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int tab[n];
    for (int i =0; i<n;i++)
    {
        cin>>tab[i];
    }
    sort(tab, tab+n);
    int licznik=0;
    int sum=0;
   for (int i =n-1; i>=0; i--)
   {
       sum+=tab[i];licznik++;
       if (sum>=m)
        break;
   }
   cout << licznik;
}
