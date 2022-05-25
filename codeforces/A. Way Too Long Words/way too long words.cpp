#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t;
    cin>>t;
    while (t>0)
    {
        string x;
        cin>>x;
        unsigned int z = x.length();
        if (z>10)
            cout << x[0]<<z-2<<x[z-1]<< "\n";
            else cout << x<<"\n";
        t--;
    }
 
 
}
