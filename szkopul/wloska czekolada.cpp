#include <iostream>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;
int cz[1000007];
pair <int, int> p[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    set <int> s;
    int n, maks=0;
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>cz[i];
        maks=max(maks, cz[i]);
        if (s.find(cz[i])==s.end())
            {s.insert(cz[i]); p[cz[i]].second=i;}
        p[cz[i]].first=i;
    }
    sort (p+1, p+maks+1);  int ile=0, last=0, last2=0;
    for (int i =1; i<=maks; i++)
      {
        //  cout << p[i].first<< " "<< p[i].second<< endl;
            if (p[i].first==0) continue;
            if (p[i].second>last &&last2<p[i].first && p[i].second>last2) {ile++; last=p[i].second; last2=p[i].first; }

      }
      cout<< ile;
}