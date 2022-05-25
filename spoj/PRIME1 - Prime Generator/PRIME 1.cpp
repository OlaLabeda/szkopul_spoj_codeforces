#include <iostream>

#include <cmath>
using namespace std;
bool isprime (unsigned int x)
{
    if (x<=1)
        return 0;
    else {
        for (unsigned int i =2; i<=sqrt(x); i++)
            if (x%i==0)
            return 0;
            return 1;

    }
}
int main ()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned short int t;
    cin>>t;

    while (t>0)
    {unsigned int m, n;
    cin>>m>>n;
           for (unsigned int i =m; i<=n; i++)
           {
             if (isprime(i))
            cout << i<<endl;}
        cout << "\n";
        t--;
    }
}
