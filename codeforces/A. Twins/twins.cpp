#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
int n;
cin>>n;
int tab[n];
int suma=0;
for (int i =0;i<n;i++)
    {cin>>tab[i];
    suma+=tab[i];
    }
        sort (tab, tab+n);
        int suma2=0;
        int licznik=1;
        int i=0;
        int j =n-1;
        int pod=tab[j];
      while (n!=0)
      {
          if (suma2<pod)
          {suma2+=tab[i];
          i++;}
          else  {
                pod+=tab[j-1];
          licznik++;
          j--;}
          n--;
      }
      cout << licznik;
 
 
}
