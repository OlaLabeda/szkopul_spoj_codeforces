#include <iostream>
using namespace std;
int main ()
{
    string a;
    cin>>a;
    if ((int)a[0]>=97&& (int)a[0]<=122)
   a[0]-=32;
    cout << a;
 
}
