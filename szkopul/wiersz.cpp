#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;
    string s, s2;
    getline(cin, s);
    int licznik=0;
    for (int i =0; i<n; i++)
    {

        getline(cin, s);
        getline(cin,s2);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

        if (s.size()>=k && s2.size()>=k)
        {
            bool czy=1;
            int j;
            for (j= 0; j<k;j++)
               {
                if (s[s.size()-1-j]!=s2[s2.size()-1-j])
                    {
                    czy=0;
                    break;
                    }
               }
            if (czy)
            {
                int ls=0, ls2=0;
                for (int z = 0; z<s.size(); z++)
                {
                    if (s[z]=='a'||s[z]=='e'||s[z]=='i'||s[z]=='o'||s[z]=='u'||s[z]=='y')
                        ls++;
                }
                for (int z = 0; z<s2.size(); z++)
                {
                     if(s2[z]=='a'||s2[z]=='e'||s2[z]=='i'||s2[z]=='o'||s2[z]=='u'||s2[z]=='y')
                     ls2++;
                }
                if (ls==ls2)
                    licznik++;
            }
        }
    }cout << licznik<<"\n";
}
