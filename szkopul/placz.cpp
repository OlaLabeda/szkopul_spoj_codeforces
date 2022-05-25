#include <bits/stdc++.h>
using namespace std;
#define ll long long
int p = 31; 
const int MAKS = 1e6+7;
const int MOD = 1e9+7;
ll potegi[MAKS], hasz[MAKS];
void potegowanie ()
{
    potegi[0]=1;
    for (int i = 1; i < MAKS; i++)
        potegi[i]=(potegi[i - 1] * p)%MOD;
}

void haszowanie(const string &slowo, ll hasz[])
{
    hasz[0]=slowo[0]-'a'+1;
    for (int i =1; i<slowo.size(); i++)
        hasz[i]=((potegi[i]*(slowo[i]-'a'+1))%MOD+hasz[i-1])%MOD;
        
}
void czyslowo (int poczatek, int koniec, ll hasz2[])
{
    ll pom1, pom2;
    if (poczatek>0)
    pom1=(hasz[koniec]-hasz[poczatek-1]+MOD)%MOD;
    else pom1=(hasz[koniec])%MOD;

    pom2=(hasz2[koniec-poczatek]* potegi[poczatek])%MOD;  /// 2 3 => 1 bo ten hasz od 0
    (pom1==pom2)? cout << "TAK\n" : cout << "NIE\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string slowo;
    
    cin >> slowo >> n;
    potegowanie();
    haszowanie(slowo, hasz);
    for (int i =1; i<=n; i++)
    {
        string podslowo;
        int poczatek, koniec;
        cin >> podslowo >> poczatek;
        ll hasz2[podslowo.size()+2];
        for (int i =0; i <=podslowo.size(); i++)
            hasz2[i]=0;
        haszowanie(podslowo, hasz2);
        koniec=poczatek+podslowo.size()-1;
        czyslowo(poczatek, koniec, hasz2);
        
    }
   
     return 0;
}