#include <iostream>
#include <set>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tab[26];
    set <int> s;
    for (int i =65; i<=90; i++)
    {
        tab[i]=0;
    }

    int x;
    cin>>x;
    while (x!=0)
    {
        char a, znak;
        cin>>a;
        s.insert((int)a);
        cin>>znak;
        int liczba;
        cin>>liczba;
        if (znak=='+')
        tab[(int)a]+=liczba;
        else tab[(int)a]-=liczba;
        x--;
    }
    for (auto k:s)
    {
       cout << (char)k<<" "<<tab[k]<<endl;
    }
}