#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned int z;
    cin>>z;
    while (z!=0)
    {
        unsigned long int n, d;
        cin>>n>>d;
        unsigned long int gcd = __gcd(n,d);

        cout << n/gcd<<"\n";
        z--;
    }
}