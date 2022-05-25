#include <iostream>
#include <algorithm>
using namespace std;
long long grzyby[100007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t;
    cin>>n;
    for (int i =1; i<=n; i++)
        cin>>grzyby[i];
    sort(grzyby+1, grzyby+n+1);
    for (int i =1; i<=n; i++)
        grzyby[i]+=grzyby[i-1];
        cin>>t;
        for (int i =1; i<=t; i++)
        {
            int x;
            cin>>x;
            cout << grzyby[x]<< "\n";
        }


}