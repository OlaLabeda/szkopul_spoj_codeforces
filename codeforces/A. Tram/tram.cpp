#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int wyn=0;
    int wynmax=0;
    for (int i =0;i<n;i++)
    {
       cin>>a[i];
       cin>>b[i];
    }
    for (int i =0;i<n;i++)
    {
       wyn=wyn+b[i];
       if (wyn>wynmax)
        wynmax=wyn;
       wyn=wyn-a[i+1];
    }
 cout << wynmax;
 
}
