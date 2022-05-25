#include <bits/stdc++.h>
using namespace std;
vector <long long> numery; //numery osob wygranych
constexpr int M=1e6+7;
int ostatni[M]; //ostatnia najwieksza wartosc kupiona dla danej liczby osob
bool czybon[M], kupione[M]; //w jakich torebkach sa bony, ktore torebki zostaly juz kupione

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long klienci=0;
    int m, n, a, uzyte; //ile bonow, ile klientow, pomocnicza, pomocnicza - ile osob juz cos kupilo w danym dniu
    cin>>m;
    for (int i =1; i<=m; i++)
    {
        cin>>a;
        czybon[a]=1; //zaznaczam w ktorych torebkach sa bony
    }
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>a;
        uzyte=0;
        for (int j = ostatni[a]+a; j<=1000000; j+=a)    //iteruje sie po wszytskich mozliwych torebkach, ktore sa wielokrotnosciami liczby a,
        {                                               // rozpoczynajac na ostatniej najwiekszej kupionej +a
            if (uzyte==a) break; // jezeli wszystkie osoby zrobia zakupy => przerwij szukanie
            if (kupione[j]) continue; //jezeli dana paczka jest kupiona => przejdz do nastepnej iteracji
            uzyte++;    //ktos cos kupuje
            ostatni[a]=j; //ostatnia zakupiona torebka (najwieksza uzyta wielokrotnosc a)
            kupione[j]=1; //zaznacza ze torebka z danym numerem jest kupiona
            klienci++;     //ilosc klientow ogolnie sie zwieksza
            if (czybon[j]==1)   //jezeli dana wielokrotnosc jest torebka z bonem  to wrzucam numer szczesliwego klienta
                numery.push_back(klienci);
        }
        klienci+=a-uzyte; //dodaje do liczby klientow tych klientow, ktorzy kupili torebki wieksze niz milion, bo mogli tacy byc, ale bonow bylo mniej, wiec wystarczy dodac tych klinetow
    }
    cout << numery.size()<< "\n"; //wypisuje liczbe klientow wygranych i ich numery
    for (auto x : numery)
        cout <<x<< "\n";
}