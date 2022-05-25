#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXN=1000123;
const int MAXKK=1000123;
const int INF=2000000123;
int poss[MAXKK]; //jak dlugo mam jakis pakiet o wartosci i dostepny
bool result[MAXN];
vector<pair<pair<int, int>, pair<int, int>>> v;
int n, p, k, s, m, a, b, c;
int totwart, maxorder; //najmniejsza z maksymalnych wartosci przedmiotow i celow do ukradzenia

int main ()
{
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>c>>a>>b;
        v.push_back(make_pair(make_pair(2*a, b), make_pair(c, -1))); //2*a bo chce sobie zaznaczyc ze to parzyste
        //-1 bo to nie sa te kradzione
        totwart+=c;
    }
    cin>>p;
    for (int i =1; i<=p; i++)
    {
        cin>>m>>k>>s;
        v.push_back(make_pair(make_pair(2*m+1, m+s), make_pair(k, i)));
        //nieparzyste - zanzcazcam sobie, m+s - koniec kradizezy, k i i czyli wartosc i indeks zapytania
        maxorder= max(maxorder, k);//najwieksza wartosc do kradziezy
    }
    totwart=min(totwart, maxorder);

    sort(v.begin(), v.end()); //sortuje po czasie rozpoczecia kradziezy

    for(int i = 1; i < MAXKK; i++) //to jeszcze nw co to
        poss[i] =-INF;
        poss[0]=INF;


    for(int i = 0; i < v.size(); i++) //dla kazdego zapytania
    {
        if ((v[i].first.first & 1))  // jesli to pytanie to:
            result[v[i].second.second] = (poss[v[i].second.first] > v[i].first.second);   //true or false
            //czyli wynik[i] = jezeli pos ( dlugosc obecnosci danego elementu jest wieksza niz koniec kradziezy
        else
        {   //jezeli to szatnia to:
            for (int j = totwart-v[i].second.first; j>=0; j--) //j = makswartosc-wartosc danego ubrania
            if (poss[j] != -INF)    //jesli wartosc nie wychodzi poza skale
              poss[j + v[i].second.first] = max(poss[j + v[i].second.first], min(poss[j], v[i].first.second));
              //poss[j+wartosc ubrsania] = maks (pos[k+wart ubrania] i minimum z poss[j] i konca czasu)
        }
  }
  for (int i =1; i<=p; i++)
    result[i]? cout << "TAK\n" : cout <<"NIE\n";
  return 0;
}