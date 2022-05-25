#include <iostream>
#include <algorithm>
#include <list>
typedef long long int LL;
using namespace std;
int n, d, m, curend;
LL p;
const int MAXN=2000007;
LL w[MAXN], prefw[MAXN], dval[MAXN];
list <LL>List;

LL GetCurrMax(int beg, int endd){
  if(curend < endd){
    curend = endd;
    while(!List.empty() && dval[ List.back() ] <= dval[endd])
      List.pop_back();
    List.push_back(endd);
  }

  while(!List.empty() && List.front() < beg)
    List.pop_front();

  if(List.empty())
    return 0;
  return dval[ List.front() ];
}

bool CheckInterval(int beg, int endd){
  if(endd > n) return false;

  LL sum = prefw[endd] - prefw[beg-1];
  LL optD = GetCurrMax(beg, endd-d+1);

  return (sum - optD <= p);
}

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>p>>d;
    for (int i =1; i<=n; i++)
        cin>>w[i];
    for (int i =1; i<=n; i++)
        prefw[i]=prefw[i-1]+w[i];
    for (int i =1; i<=d; i++)
        dval[1]+=w[i];
    for (int i =2; i<=n-d+1; i++)
        dval[i]=dval[i-1]-w[i-1]+w[i+d-1];


    int res = d,candidate = d;
      List.push_back(1);
      curend = 1;
      for(int i=1; i<=n-d+1; i++)
       {
        while(CheckInterval(i, candidate+1))
          candidate++;
        res = max(res, candidate-i+1);
      }
        cout << res;
}