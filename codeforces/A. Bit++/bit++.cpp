#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,z=0;
    cin>>n;
 
    while (n>0)
    {
        string x;
        cin>>x;
        if (x[1] =='+')
            z++;
        else z--;
        n--;
    }
    cout << z;
 
