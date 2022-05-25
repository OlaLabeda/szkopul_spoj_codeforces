#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    double a[n], b[n];
    char u;
    for (int i =0; i<n; i++)
    {
        cin>>a[i]>> u>>b[i];
        a[i]=a[i]/b[i];

    }
    sort(a, a+n);
    if (a[0]+a[1]>a[n-1])
        cout << "TAK";
    else cout << "NIE";
}