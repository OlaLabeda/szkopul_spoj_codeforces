#include <iostream>
using namespace std;
long long tab[1000007];
int wyn[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; long long k;
    cin>>n>>k;
    for (int i =1; i<=n; i++)
        cin>>tab[i];
    int pocz=1,kon=1;
    while(kon<=n && pocz<=n)
    {
        if (tab[kon+1]-tab[pocz]<=k)
        {
            kon++;
        }
        else
        {
            int pom=pocz;
            while (tab[kon+1]-tab[pocz]>k)
                pocz++;
            for (int i=pocz-1; i>=pom; i--)
                wyn[i]=kon;

        }
        if (kon==n&& pocz<n)
                    for (int i=kon; i>=pocz; i--)
                wyn[i]=kon;

    }
    for (int i =1; i<=n; i++)
        cout << wyn[i]<< " ";
}