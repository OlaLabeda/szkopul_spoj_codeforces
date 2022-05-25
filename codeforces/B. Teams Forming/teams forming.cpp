#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i =0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    int licznik=0;
    for (int i =1; i<n;i+=2)
    {
        licznik+=a[i]-a[i-1];
    }
    cout << licznik;
}
