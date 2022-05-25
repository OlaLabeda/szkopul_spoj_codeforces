#include <iostream>
using namespace std;

int binary(int sum, int tab[], int rozmi)
{
    int p = 1;
    int sr=0;
    while (p<rozmi)
    {sr=(p+rozmi)/2;
    if (tab[sr]>=sum)
    {
        rozmi=sr;
    }
    else
        p=sr+1;
}return p;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b;
        cin>>a>>b;
    int arb[a+1], ban[b+1];
    arb[0]=0;
    ban[0]=0;
    for (int i =1; i<=a; i++)
        {
        cin>>arb[i];
        arb[i]+=arb[i-1];
        }
    for (int i=1; i<=b; i++ )
        {
        cin>>ban[i];
        ban[i]+=ban[i-1];
        }

    int t;
        cin>>t;
    for (int testy=0; testy<t; testy++)
        {
            int sum=0;
            int d,m;
            char c;
                cin>>d>>m>>c;
            if (c=='A')
            {
                sum+=arb[m-1]+d;
                cout <<sum-ban[binary(sum, ban, b )-1]<< " " << binary(sum, ban, b )<<endl;
            }
            if (c=='B')
            {
                sum+=ban[m-1]+d;
                  cout <<sum-arb[binary(sum, arb, a )-1]<< " " << binary(sum, arb, a )<<endl;
            }



        }

}