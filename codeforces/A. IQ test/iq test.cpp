#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int tab[n];
    vector <int> parzyste;
    vector <int> niep;
    for (int i =0; i<n;i++)
            {cin>>tab[i];
            if (tab[i]%2==0)
                parzyste.push_back(i+1);
            else niep.push_back(i+1);
            }
            if (parzyste.size()>niep.size())
                cout << niep[0];
            else cout << parzyste[0];
 
 
 
}
