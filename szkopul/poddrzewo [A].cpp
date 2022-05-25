#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    int licznik=0;
    cin>>n;

    for (int i =0; i<n;i++)
    {
        cin>>a;
        if(a==1)
        licznik++;
    }

    if (licznik>=2)
        cout << "0\n";
    else if (licznik==1)
        cout << "1\n";
    else
        cout <<"2\n";

 cout <<"2\n";
 cout <<"1 2\n";


}