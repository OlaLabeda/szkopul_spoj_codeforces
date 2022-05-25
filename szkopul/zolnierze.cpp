#include <iostream>
#include <algorithm>
using namespace std;
int t1[1000007], t2[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for (int i =1; i<=n; i++)
        cin>>t1[i]>>t2[i];
    sort(t1+1,t1+1+n);
    sort(t2+1, t2+1+n);
    int sum=0;
    for (int i =1; i<=n; i++)
    {
        if (t1[i]>t2[i])
        {
            cout << "NIE"; return 0;
        }
        else sum+=t2[i]-t1[i];
    }
    cout << sum;
}