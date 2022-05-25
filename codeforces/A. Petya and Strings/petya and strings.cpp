#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{  ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin>>a>>b;
    for (int i =0; i<a.size(); i++)
    {
        if ((int)a[i]>=65&&(int)a[i]<=90 )
            a[i]+=32;
        if ((int)b[i]>=65&&(int)b[i]<=90 )
            b[i]+=32;
    }
    int s=0;
    for (int i =0; i<a.size();i++)
    {
        if (a[i]!=b[i])
        {
            if ((int)a[i]<(int)b[i])
                cout << -1;
            else cout << 1;
            break;
        }
        else s++;
 
    }
    if (s==a.size())
        cout << 0;
}
