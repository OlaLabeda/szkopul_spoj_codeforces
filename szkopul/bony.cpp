#include <iostream>
#include <vector>
using namespace std;
constexpr int M = 1e6+5;
vector<long long> v;
int last[M];
bool cb[M];
bool kupione[M];

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int klienci=0;
    int m, n, a, uzyte;
    cin>>m;
    for (int i =1; i<=m;i++)
    {
        cin>>a;
        cb[a]=1;
    }
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a;
        uzyte=0;
        for (int j = last[a]+a; j<=1000000; j+=a )
        {
            if (uzyte==a) break;
            if (kupione[j]) continue;
            last[a]=j;
            kupione[j]=1;
            klienci++;
            uzyte++;
            if (cb[j]==1) v.push_back(klienci);
        }
        klienci+=a-uzyte;
    }
    cout << v.size()<<"\n";
    for (auto x: v)
        cout << x<<"\n";

}