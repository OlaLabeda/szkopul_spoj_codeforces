#include <iostream>
using namespace std;

int main ()
{
    int b;
    cin>>b;
    for (int i =1;i<=b; i++)
    {
        if (i%7==0 && i%11!=0)
            cout << "Hurra!"<<endl;
            else if (i%7!=0 && i%11==0)
            cout << "Super!"<<endl;
            else if (i%7==0&& i%11==0)
                cout << "Wiwat!"<<endl;
        else cout <<i<<endl;

    }
}