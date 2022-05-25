#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;
    while (t--)
   {int tab[124]={0};
     int n;
    cin>>n;
     string S="";
     string s;
     for (int i =0; i<n;i++)
     {
cin>>s;
S+=s;
     }
sort (S.begin(), S.end());
for (int i =0; i<S.size(); i++)
{
tab[(int)S[i]]++;
}
 
bool czy=1;
for (int i =97; i<=122; i++)
{
if (tab[i]==0) continue;
else if (tab[i]%n==0) continue;
else if (tab[i]%n!=0 && tab[i]!=0)
{
    cout << "NO"<<"\n";
    czy=0;
    break;
}
}
if (czy) cout << "YES"<<"\n";
}
}
