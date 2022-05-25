#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n, m, x, y,l;
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cin>>l>>m>>x>>y;
        if (m==0)
        cout << abs(x-y)<< endl;
        else
        if (abs(x-y)+m<l)
            cout <<abs(x-y)+m<< endl;
        else cout <<l-1<< endl;
 
    }
}
