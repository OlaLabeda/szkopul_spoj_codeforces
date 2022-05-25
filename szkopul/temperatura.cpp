#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define MAXN 1000007
deque <PII> q;
int n, a, b;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ret=0;
    cin>>n;
    for (int i =0; i<n; i++)
    {
        cin>>a>>b; //wprowadzam przedzial
        //zdejmuje zalegajace elementy, ktore zaburzaja monotonicznosc, prz okazji aktualizuje wynik
        while (!q.empty() && q.front().first>b)
        {
            ret=max(i-q.front().second, ret);
            q.pop_front();
        }
        int pocz=i;
        //znajduje indeks od ktorego mogla sie najwczesniej zaczynac monotonicznosc
        while (!q.empty() && q.back().first <=a)
        {
            pocz=q.back().second;
            q.pop_back();
        }
        //wrzucam na kolejke wartosc i indeks od ktoego najwczesniej mogla sie ona zaczca
        q.push_back(PII(a, pocz));
    }
    if (!q.empty())
    {
        int p=n-q.front().second;
        ret=max(ret, p);
    }
    cout << ret;
}