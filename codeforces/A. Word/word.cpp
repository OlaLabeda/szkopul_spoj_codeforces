#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int licznikmal=0, licznikduz=0;
    for (int i =0;i<s.size();i++)
    {
        if (s[i]>=65 && s[i]<=90 )
            licznikduz++;
        else licznikmal++;
    }
    if (licznikmal>=licznikduz)
    {
        for (int i =0;i<s.size();i++)
        {
            if (s[i]>=65 && s[i]<=90)
                s[i]+=32;
 
        }
    } else for (int i =0;i<s.size();i++)
        {
if (s[i]>=97)
s[i]-=32;
        }
    cout << s
