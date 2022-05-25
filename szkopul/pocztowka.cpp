#include <iostream>
using namespace std;
unsigned long long ind[1000007];
unsigned long long gory[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    long long m, l=0;
    cin>>n>>m;
    for (int i =1; i<=n; i++)
       {
           cin>>gory[i];
           if (gory[i]>=m)
            ind[i]=i;
            else ind[i]=ind[i-1];
            l+=ind[i];
       }
        cout <<l;
}
