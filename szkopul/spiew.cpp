#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ile=0;
    int i=0;
    while (i<n)
       {
           if (s[i]=='Z'&&s[i+1]=='Z')
            {
                ile++;
                s[i+1]='W';
                if (s[i+2]=='Z')
                    s[i+2]='W';
                i+=3;
            }
            else if (s[i]=='Z')
            {
                ile++;
                i++;
            }
            else i++;
       }
       cout << ile;
}