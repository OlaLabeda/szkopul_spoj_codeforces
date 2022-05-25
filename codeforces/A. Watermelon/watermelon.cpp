#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned short int w;
    cin>>w;
    if (w%2==0&& w!=2)
        cout << "YES";
    else cout << "NO";
 
}
