#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int w[100007];
int z[100007];
int s[100008];
int main ()
{
    set<int> se;
    set<int>::iterator pom;
        set<int>::iterator it;
    int n, ile;
    cin>>n>>ile;
    string s1, s2;
    cin>>s1>>s2;
    for (int i =1; i<n; i++)
        {w[i]=s1[i-1]-48;}
    for (int i =1; i<n; i++)
        {z[i]=s2[i-1]-48;}
    char znak;
    int wart, ind;
    for (int i =1; i<n; i++)
        {s[i]=z[i]+w[i]; if (s[i]!=9) se.insert(i);}
    for (int i =1; i<=ile; i++)
    {
        cin>>znak>>ind;
        if (znak=='W')
        {
            cin>>wart;
            w[n-ind]=wart;
            s[n-ind]=w[n-ind]+z[n-ind];
            if (s[n-ind]!=9)
            se.insert(n-ind);
            else se.erase(n-ind);
        }
        else if (znak=='Z')
        {
            cin>>wart;
            z[n-ind]=wart;
            s[n-ind]=w[n-ind]+z[n-ind];
            if (s[n-ind]!=9)
            se.insert(n-ind);
            else se.erase(n-ind);
        }
        else if (znak=='S')
        {
            if (s[n-ind+1]>=10)
             cout <<(s[n-ind]+1)%10<<"\n";
            else if (s[n-ind+1]==9)
            {
               pom=se.upper_bound(n-ind+1); //cout << *pom<< endl;
               if (se.upper_bound(n-ind+1)!=se.end() && s[*pom]>=10)
               {
                  cout <<(s[n-ind]+1)%10<<"\n";
               }
               else cout <<s[n-ind]%10<<endl;
            }
            else cout << s[n-ind]%10<< endl;


        }
    }
}