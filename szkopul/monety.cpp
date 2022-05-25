#include <iostream>
#include <algorithm>
using namespace std;
long long MOD=1e9+7;
int n;
const int MAX=1000007;
int kieszonki[MAX];
long long wynik=1;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for (int i =0; i<n; i++)
        cin>>kieszonki[i];
    sort(kieszonki, kieszonki+n);
    for (int i =0; i<n; i++)
    {
       wynik=(wynik*(kieszonki[i]-i))%MOD;
    }
    cout << wynik<< endl;
}