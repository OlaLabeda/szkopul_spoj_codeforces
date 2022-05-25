#include <iostream>
using namespace std;
long long gory[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n; long long m;
    cin>>n>>m;
    for (long long int i =1; i<=n; i++)
        cin>>gory[i];
       long long int wyn=0;
      long long  int l=0;
    for (long long int i =1; i<=n; i++)
    {
        if (gory[i]>=m)
            l=i;
        wyn+=l;
    }
cout << wyn;
}