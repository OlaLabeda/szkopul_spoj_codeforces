//wyszukujemy binarnie dobry wynik (czyli najwczesniejszy powrot pociagow)
//gdy mamy wynik przydzielamy pociagi zachlannie az do konca czasu)
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
constexpr int MAXN=1e6+7;
int n;
LL s; //long long na wszelki w
int poj[MAXN]; //kiedy pojawia sie pociag => wejscie

bool sprawdz (LL czas)
{
    //czy wszytskie pociagi dadza rade przejechac trase w danym czasie
    LL cur=n-1; //liczba pociagow
    while (cur>=0)
    {
        LL ile = czas-2*s-poj[cur]+1; //ile zzdazy przejechac kiedy ostatni stratuje w poj[cur] i wraca w czas
        if (ile<=0)
            return false;
        czas=poj[cur]-ile+1;
        cur-=ile;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   cin>>n>>s;
   cin>>poj[0];
   for (int i =1; i<n; i++)
   {
       cin>>poj[i];
       if (poj[i]<=poj[i-1])
        poj[i]=poj[i-1]+1;
      //jak duzo pociagow w tej samej chwili to trzeba je przesunac zeby sie zgadzalo z tym, ze odjezdzaja co sekunde
    }
    LL L = poj[n-1], //w takim czasie na pewno nie da sie dojechac - najpozniejszy przyjazd pociagu
       H = poj[n-1]+2*s+n; //w takim czasie na pewno sie da - najpozniejszy mozliwy powrot pociagow (ale to tak TOTALNIE najpozniejszy)
    while (H-L>1)
    {
        LL M=(L+H)/2;
        (sprawdz(M) ? H : L) =M;
        //jezeli sprawdz od m =1, to zmniejszam maksymalny czas, przeciwnie, zwiekszam minimalny
    }
    cout << H;
}