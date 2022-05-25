#include <bits/stdc++.h>
using namespace std;

const int MAX_KLOCKOW=1000010;

int masy_klockow[MAX_KLOCKOW];            
int liczba_klockow_dla_wagi[MAX_KLOCKOW]; //dynamik - przechowujemy ile MINIMALNIE klockow trzeba by osiagnac dana wage

int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);

 int liczba_wszystkich_klockow, max_mozliwa_liczba_klockow_w_pudelku, maksymalna_masa_pudelka;
 int i,j;

 
 cin >> liczba_wszystkich_klockow;
 cin >> max_mozliwa_liczba_klockow_w_pudelku;
 cin >> maksymalna_masa_pudelka;

 for (i=0; i<liczba_wszystkich_klockow; ++i)
    cin >> masy_klockow[i];

 for (i=0; i<=maksymalna_masa_pudelka; ++i)
    liczba_klockow_dla_wagi[i] = -1;
 liczba_klockow_dla_wagi[0] = 0;

 for (i=0; i<liczba_wszystkich_klockow; ++i) {
    if ( masy_klockow[i] > maksymalna_masa_pudelka )
       continue;
    for (j=maksymalna_masa_pudelka-masy_klockow[i]; j>=0; --j) {
	   if ( liczba_klockow_dla_wagi[j] == -1 )
	      continue;
	   if ( liczba_klockow_dla_wagi[j+masy_klockow[i]] == -1 ) {
	      liczba_klockow_dla_wagi[j+masy_klockow[i]] = liczba_klockow_dla_wagi[j]+1;
	      continue;
	   }
	   if ( liczba_klockow_dla_wagi[j+masy_klockow[i]] > liczba_klockow_dla_wagi[j] )
	      liczba_klockow_dla_wagi[j+masy_klockow[i]] = liczba_klockow_dla_wagi[j]+1;
    }
 }
 for (j=maksymalna_masa_pudelka; j>=0; --j) {
    if ( liczba_klockow_dla_wagi[j] > 0 ) {
       if ( liczba_klockow_dla_wagi[j] <= max_mozliwa_liczba_klockow_w_pudelku ) {
	      cout << j << "\n";
	      return 0;
	   }	
    }
 }
 
 cout << 0 << "\n";
 return 0;
}