#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int wyspy, mosty;
    cin>>wyspy>>mosty;
    int a[mosty], b[mosty];
    int c[wyspy+1];
    for (int i =0; i<=wyspy; i++)
        c[i]=0;
    for (int i =0; i<mosty; i++)
        {cin>>a[i]>>b[i];
    c[a[i]]++;  c[b[i]]++;
        }
        int licznik=0;
    for (int i =1; i<=wyspy; i++)
    {
        if (c[i]<2)
            licznik++;
    }
    cout << licznik;
}