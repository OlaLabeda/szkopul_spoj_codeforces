#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned int n, licznikg=0;
    cin>>n;
    while (n>0)
    {unsigned int tab[3], licznik=0;
    for (int i=0; i<3; i++)
    {cin>>tab[i];
    licznik+=tab[i];}
    if (licznik>=2)
        licznikg++;
 
    n--;
    }cout << licznikg;
 
}
