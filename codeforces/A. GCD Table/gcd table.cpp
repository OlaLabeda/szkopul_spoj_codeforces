#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
const int N=510;
multiset<int>tablica;
int wynik[N];
multiset<int>::iterator it;
int main ()
{
    int n, a, aktumaks, aktuindeks;
    cin>>n;
    for (int i =1; i<=n*n; i++)
    {
        cin>>a;
        tablica.insert(a);
    }
    aktuindeks=1;
    while(!tablica.empty())
    {
        it=tablica.end();
        it--;
        aktumaks=*it;
        wynik[aktuindeks]=aktumaks;
        it = tablica.find(aktumaks);
        tablica.erase(it);
        for (int i =1; i<aktuindeks;i++)
        {
            //usuwam dzielniki
            it=tablica.find((__gcd(aktumaks, wynik[i])));
            tablica.erase(it);
            it=tablica.find(__gcd(aktumaks, wynik[i]));
            tablica.erase(it);
        }
        aktuindeks++;
    }
for (int i =1; i<=n; i++)
    cout << wynik[i]<< " ";
 
}
