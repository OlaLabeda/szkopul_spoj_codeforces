#include <iostream>
using namespace std;
int main ()
{
    int tab[5][5];
    int licznik=0;
for (int i =0; i<5; i++)
{
    for (int j =0; j<5;j++)
    {
         cin>>tab[i][j];
         if (tab[i][j]==1)
         {
             if (i!=2 || j!=2)
             {
                 if (i<2)
                    licznik=licznik+2-i;
                    if (i>2)
                        licznik=licznik+i-2;
                   if (j>2)
                    licznik=licznik+j-2;
                    if (j<2)
                        licznik=licznik+2-j;
                        break;
 
             }
             else licznik=0;
         }
    }
}
cout << licznik;
}
