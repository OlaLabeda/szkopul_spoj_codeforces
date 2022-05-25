#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    int p, k;
    for (int i =0; i<m; i++)
    {
        cin>>p>>k;
        int ro = k-p;
        int v=p-1, w=k-1;
      while (n>=k)
      {
          s[w]=s[v];
          v++;
          w++;
          k++;
      }


    }
cout << s;
}