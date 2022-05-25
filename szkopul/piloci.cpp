#include <bits/stdc++.h>
using namespace std;
int k, n, num, res, p;
//maks roznica, liczba elementow, wartosc w kazdej iteracji
//wynik, indeks poczatku gasiennicy
deque <pair<int, int>> qmin, qmaks;
int main ()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>k>>n;
    for (int i =0; i<n; i++)
    {
        cin>>num;
        while (!qmin.empty() && qmin.back().first>num)
            qmin.pop_back();
        while (!qmaks.empty() && qmaks.back().first<num)
            qmaks.pop_back();
        qmin.push_back(make_pair(num, i));
        qmaks.push_back(make_pair(num, i));
        while (qmaks.front().first-qmin.front().first>k)
        {
            if (qmaks.front().second==p)
                qmaks.pop_front();
            if (qmin.front().second==p)
                qmin.pop_front();
            p++;
        }
        res=max(res, i-p+1);
    }
    cout << res;
}