#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,s;
    cin>>k>>s;
bool sumy[s+1];
    int pijawki[k];
    for (int i=0; i<k; i++)
        cin>>pijawki[i];
for (int i =1; i<=s; i++)
    sumy[i]=0;

    sumy[0]=1;
    for (int i =0; i<k; i++)
    {
        for (int j =s; j>=0; j--)
        {
            if (sumy[j] &&j+pijawki[i]<=s )
            {
                sumy[j+pijawki[i]]=1;
            }
        }
    }
    if (sumy[s])
        cout << "Abrakadabra";
        else cout << "SorryHarry";
}