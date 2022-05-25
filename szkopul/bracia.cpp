#include <bits/stdc++.h>
using namespace std;
constexpr int MAXN=1e6+7;
int n, granica, wynik, chl[MAXN], pierw[MAXN], ostatni[MAXN];
int main ()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>chl[i];
        if (pierw[chl[i]]==0) pierw[chl[i]]=i;
        ostatni[chl[i]]=i;
    }
    for (int i =1; i<=n; i++)
    {
        if (ostatni[chl[i]]==i&& granica<pierw[chl[i]])
        {
            wynik++;
            granica=i;
        }
    }
    cout << wynik;
}