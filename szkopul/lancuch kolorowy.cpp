 #include <iostream>
using namespace std;
int l[1000007], c[1000007], lanc[1000007], ilepowinno[1000007],ileniezg, d, wynik, ilejest[1000007];
void ile (int k, int dodaj)
{
    if (ilepowinno[k]==ilejest[k]) ileniezg++;
    ilejest[k]+=dodaj;
    if (ilepowinno[k]==ilejest[k]) ileniezg--;
}
int main ()
{
    int n, m;
    cin>>n>>m;
    for (int i =1; i<=m; i++)
    {
        cin>>l[i];
        d+=l[i];
        if (d>n)
        {
            cout << 0<< "\n";
            return 0;
        }
    }
    for (int i =1; i<=m; i++)
    {
        cin>>c[i];
        ilepowinno[c[i]]=l[i];
    }
    for (int i =1; i<=n; i++)
        cin>>lanc[i];
        ileniezg = m;
    for (int i =1; i<=d; i++)
        ile(lanc[i], 1);

    if (ileniezg==0) wynik++;
    for (int i =1; i<=n-d; i++)
    {
        ile(lanc[i], -1);
        ile(lanc[i+d], 1);

        if (ileniezg==0) wynik++;
    }
    cout << wynik;
}
