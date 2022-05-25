#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool issubsequence (string str, string str1, int m, int n)
{
    int j=0;
    for (int i=0; i<n && j<m;i++ )
        if (str[j]==str1[i])
        j++;
    return (j==m);
}
int main ()
{
   string s;
    cin>>s;
    string s2 ="hello";
    if (issubsequence(s2, s, 5, s.size()))
        cout << "YES";
    else cout << "NO";
 
    }
