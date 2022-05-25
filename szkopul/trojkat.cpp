#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    cin>>n;
     long long int a[n];
    bool czy=0;
    for (int i =0; i<n; i++)
        cin>>a[i];
    sort (a, a+n);
    for (int i =n-1 ; i>=2;i--)
    {
        if (a[i]< a[i-1]+a[i-2])
        {
            cout <<( long long )a[i-1]+a[i-2]+a[i];
            czy=1;
            break;
        }
    }
    if (czy==0)
        cout <<-1;
}