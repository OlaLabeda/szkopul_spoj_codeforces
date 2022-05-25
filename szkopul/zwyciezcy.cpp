#include <iostream>
using namespace std;
int tab[1001];
int main ()
{
    int n, maks=0;
    cin>>n;
    int tabl[n+1];
    for (int i =1; i<=n; i++)
        {
        cin>>tabl[i];
        tab[tabl[i]]++;
        }
    for (int i =1; i<=1000; i++)
        {
            if (tab[i]>0)
            maks=max(maks,i);
        }
    for (int  i =1; i<=n; i++)
    {
        if (tabl[i]==maks)
            cout <<(char)(i+64);
    }


}
