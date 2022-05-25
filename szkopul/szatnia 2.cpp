#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXN=1000123; // maksymalna suma wartosci
const int MAXK=100123; //maks wartosc do kradziezy (potem s
const int INF=2000000123;
int poss[MAXK]; //jak dlugo mam jakis pakiet o wartosci i dostepny
bool result[MAXN];
vector<pair<pair<int, int>, pair<int, int>>> v;
int n, p, k, s, m, a, b, c;
int totwart, maxorder; //najmniejsza z sumy maksymalnych wartosci przedmiotow i max z wartcelow do ukradzenia

int main ()
{
 int n;
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>c>>a>>b;
        v.push_back(make_pair(make_pair(2*a, b), make_pair(c, -1)));
        totwart+=c;
    }
    cin>>p;
    for (int i =1; i<=p; i++)
    {
        cin>>m>>k>>s;
        v.push_back(make_pair(make_pair(2*m+1, m+s), make_pair(k, i)));
        maxorder=max(maxorder, k);
    }
       totwart=min(totwart, maxorder);
    sort(v.begin(), v.end()); //sortuje po czasie rozpoczecia kradziezy
    poss[0]=INF;    //taki troche problem sumy, 0 da sie ukrasc zawsze
    for (int i =1; i<=MAXK; i++)
        poss[i]=-INF;
    for (int i =0; i<v.size(); i++)
    {
        if (v[i].first.first & 1) //jezeli jest nieparzysta: to zapytanie
            result[v[i].second.second]= (poss[v[i].second.first]>v[i].first.second); //jezeli dana wartosc da sie uzyskac przed powrotem wlasciciela to 1 else 0
        else
        {//tu wchodze w te sumy tylko powalone bo z aktualizacja
            for (int j =totwart-v[i].second.first; j>=0; j--) //iteruje sie od najwiekszej do zrobiena wartosci-wartosc dodana
            {
                if (poss[j]!=-INF)
                    poss[j+v[i].second.first]=max(poss[j+v[i].second.first], min(poss[j], v[i].first.second));
                    //licze tu momenty zabrania dla danej wartosci
                    //chcemy je zmaksymalizowac, wiec MAX, z konca czasu dla dodanej wartosci (bo jakis tam moze byc juz wpisany wiec chce zmaksymalizowac) i minimum z czasu zakonczenia dla danego elemntu i czasu dla ktorego dodaje
            }
        }
    }
    for (int i=1; i<=p; i++)
        result[i]? cout <<"TAK\n" : cout << "NIE\n";

    return 0;
}