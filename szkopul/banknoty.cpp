#include <bits/stdc++.h>
using namespace std;
const int MAXN=207, MAXK=20007, INF=30009;
int n, k; //liczba monet, reszta do wydania
int b[MAXN], c[MAXN]; //dane wejsciowe: nominaly i ilosci monet
int wyn[MAXK][MAXN]; //ile monet danego nominalu uzyto aby optymalnie uzyskac kazda kolejna kwote
int R[MAXK]; //optymalna liczba banknotow do wydania kazdej mozliwej kwoty
int m[MAXK]; //m[i] =(R[r+i*b[i]]-i) pomocnicza R przed aktualizacja

///Aktualizacja tablicy R (minimalnej liczby banknotow) i wyn, analiza kazdego kolejnego nominalu  (o indeksie nr)
void aktualizuj (int nr)
{
    ///iteracja przez kazda mozliwa reszte z dzielenia wyniku przez b[nr]
    for (int r=0; r<b[nr]; r++)
    {
        ///kolejka przechowujaca i dla ktorych wynik jest optymalny w danym moemncie
        //tak naprawde rozpatruje kazda mozliwa kombinacje lol tylko w jakis dziwny sposob
        deque <int> q;
        for (int i =0; r+i*b[nr]<=k; i++)
        {
            ///ile banknotow jest przed dodaniem kolejnego banknotu nr nominalu
            m[i]= R[r+i*b[nr]]-i;
            while (!q.empty() && m[q.back()]>=m[i])
                q.pop_back();
            q.push_back(i);
            R[r+i*b[nr]]=m[q.front()]+i;
            wyn[r+i*b[nr]][nr]=i-q.front();
            if (q.front()==i-c[nr])
                q.pop_front();


        }

    }
}
void pisz(int n,int k)
{
  if (n > 1)
    pisz(n - 1,k - wyn[k][n]*b[n]);
  if (n==1)
    cout << wyn[k][n];
  else
    cout <<" "<<wyn[k][n];
}
int main ()
{
    ///dane wejsciowe
    cin>>n; //liczba banknotow
    for (int i =1; i<=n; i++)
        cin>>b[i]; //nominaly
    for (int i =1; i<=n; i++)
        cin>>c[i]; //liczby monet danego nominalu
    cin>>k; //reszta do wydania
    /// ustawiam wstpenie minimalna liczbe monet do uzyskania kazdej kwoty (oprocz 0) na nieskzonczosc
    for (int i =1; i<=k; i++)
        R[i]=INF;
    ///aktualizcja tablic do wyniku
    for (int i =1; i<=n; i++)
        aktualizuj(i);
    ///minimalna liczba monet potrzebna do uzyskania kwoty k
    cout << R[k]<< "\n";
    ///liczba monet kazdego nominalu uzytych do uzyskania optymalnego wyniku
    pisz(n, k);

}