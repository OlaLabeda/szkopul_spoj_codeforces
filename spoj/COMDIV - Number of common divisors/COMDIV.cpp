#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned int T;
    cin>>T;
    while (T>0)
    {
        unsigned int A, B;
        cin>>A>>B;
        unsigned int x = __gcd(A, B);
        unsigned int licznik =0;
        for (int i =1; i<=x; i++)
            if (x%i==0)
                licznik++;

        cout << licznik<< "\n";
        T--;
    }
}
