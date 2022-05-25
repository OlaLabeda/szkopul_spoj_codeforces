#include <iostream>
 
using namespace std;
int main ()
{
    unsigned long int k, n, w;
    cin>>k>>n>>w;
    unsigned long long int m = 0;
   for (int i =0; i<w;i++)
    {
        m=m+(k)*(i+1);
    }
    if (m<=n)
        cout << 0;
    else
    cout << m-n;
}
