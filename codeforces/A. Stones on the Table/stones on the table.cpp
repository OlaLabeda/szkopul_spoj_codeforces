#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    int licznik=0;
    string y;
    cin>>y;
    for (int i =0; i<x; i++)
    {
        if (y[i]== y[i+1])
        {
            if (y[i]=='R'||y[i]=='B'||y[i]=='G')
                {y[i]='F';
                licznik++;
                }
        }
    }
    cout << licznik;
}
