#include <iostream>
using namespace std;
bool czy(int i)
{
    while (i>0)
    {
        if (i%10==7)
            return 1;
        else i/=10;
    }
    return false;
}
int main ()
{
    int a, b;
    cin>>a>>b;
    for (int i =a;i<=b; i++)
    {
        if (i%7==0 || czy(i)==1)
            cout << "plum"<<endl;
        else cout <<i<<endl;

    }
}