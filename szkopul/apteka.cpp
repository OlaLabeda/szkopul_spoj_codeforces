#include <iostream>
#include <algorithm>
using namespace std;
int l[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, last=0;  long long wyn=0;
    cin>>n;
    for (int i =1; i<=n; i++)
     cin>>l[i];
    for (int i =n-1; i>=1; i--)
        {l[i]=min(l[i], l[i+1]);}
    for (int i =1; i<=n; i++)
        {if (l[i]!=l[i]+1)
            {wyn+=l[i]*(i-last);
            last = i;}}
cout << wyn;
}