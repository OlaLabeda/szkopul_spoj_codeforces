#include <iostream>
using namespace std;
int zapalki[1000007];
int n;
int lew[1000007];
int paw[1000007];
void wczytaj()
{
    cin>>n;
    for (int i =1; i<=n; i++)
        cin>>zapalki[i];

}
void ile()
{
    for (int i =1; i<=n; i++)
    if (zapalki[i]==0)
        lew[i]=lew[i-1]+1;
    else lew[i]=lew[i-1];


    for (int i=n; i>=1; i--)
        paw[i]=paw[i+1]+zapalki[i];

}
void wyn()
{
    int mini=5600007;
    for (int i =0; i<=n; i++)
        { mini=min(mini, lew[i]+paw[i+1]);}
    cout << mini;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    wczytaj();
    ile();
    wyn();
}