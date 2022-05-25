#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n;
    cin>>m;
    int tab[n+1];
    for (int i =0; i<=n; i++)
        tab[i]=0;
    int oper[m];

    int x=0;
int y=0;
    for (int i =0; i<m;i++)
    {
        cin>>oper[i];
       if (oper[i]==n+1)
        {
          y=x;
        }
        else {
                if (y!=0&& y>tab[oper[i]])tab[oper[i]]=y;
        tab[oper[i]]++;
        x=max(x, tab[oper[i]]); }

    }
    for (int i =1; i<=n;i++)
       {
if (tab[i]>y)
        cout << tab[i]<<" ";
        else cout << y<<" ";
}

       }