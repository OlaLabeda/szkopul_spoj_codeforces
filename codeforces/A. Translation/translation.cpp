#include <iostream>
using namespace std;
int main ()
{
    string s, t;
    cin>>s>>t;
    bool czy=1;
    int i, j;
    for (i =0, j =t.size()-1;i<s.size() && j>=0; i++, j--)
    {
        if (s[i]==t[j])
            czy=1;
        else {czy=0; break;}
    }
    if (czy) cout << "YES";
    else cout << "NO";
}
