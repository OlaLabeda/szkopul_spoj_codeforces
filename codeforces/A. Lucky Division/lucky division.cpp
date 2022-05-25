#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
bool dziel (int n)
{
    int licz=0;
    int tab[14] = {44,47,74,77,444,447,474,744,477,774,777,747,4,7};
    for (int i =0; i<14;i++)
        {if (n%tab[i]==0)
            licz++;
          if (n==tab[i])
                {return true;
          break;}
 
        }
        if (licz>0)
            return true;
        return false;
}
int main ()
{
    int n;
    cin>>n;
    if ( dziel(n))
    cout << "YES";
    else cout << "NO";
}
