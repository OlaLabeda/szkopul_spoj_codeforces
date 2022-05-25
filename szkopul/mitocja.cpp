#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned int ile_wysp, ile_mostow;
    cin>>ile_wysp>>ile_mostow;
    vector <unsigned int> adj[ile_wysp];
    for (unsigned int i =0; i<ile_mostow;i++)
    {
        unsigned int wyspa_a, wyspa_b;
        cin>>wyspa_a>>wyspa_b;
        adj[wyspa_a-1].push_back(wyspa_b-1);
        adj[wyspa_b-1].push_back(wyspa_a-1);
    }unsigned int licznik=0;
for (unsigned int i =0; i<ile_wysp; i++)
{

    if ( adj[i].size()>1)
    licznik++;
}
cout << ile_wysp-licznik;
}