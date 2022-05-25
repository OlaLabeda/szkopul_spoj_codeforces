#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;
    while (x!=42)
    {
        cin>>x;
        if (x!=42)
          cout <<x << "\n";
        else
          break;

    }
}
