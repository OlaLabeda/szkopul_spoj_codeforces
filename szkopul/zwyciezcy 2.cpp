#include <iostream>
#include <algorithm>
using namespace std;
int tab[1007];
int zaw[1007];
int main ()
{
    int n;
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        int x;
        cin>>x;
        zaw[i]=x;
        tab[x]++;
    }
int maks=0;
for (int i =1000; i>=0; i--)
{
    if (tab[i]!=0)
    {
        maks=i;
        break;
    }
}

 char z='A';
for (int i =1; i<=n; i++)
    {
       if (zaw[i]==maks)
        cout << z;
       z++;
    }
}