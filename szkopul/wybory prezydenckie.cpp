#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
pair<long long, long long> m[100007];
long long koszt[100007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin>>n>>k;
    for (int i =1; i<=n; i++)
    {
        cin>>m[i].first;
        m[i].first++;
        m[i].first/=2;
    }
    for (int i =1; i<=n; i++)
        cin>>m[i].second;

    for (int i =1; i<=n; i++)
        {koszt[i]=m[i].first*m[i].second;}
    sort(koszt, koszt+n+1);
    //for (int i =1; i<=n; i++)
      // cout << koszt[i]<< endl;
    int ile=0, i=1;
    while ((k-koszt[i])>=0 && i<=n)
    { k-=koszt[i];
       // cout << koszt[i]<< endl;
       i++;
        ile++;
       // cout << k<< endl;
    }
    cout << ile;
}