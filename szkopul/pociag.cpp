#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ile=0;
    for (int i =1; i<n; i++)
        if(s[i]==s[i-1]&& s[i-2]==s[i])
            {ile++; s[i]='0';}
    cout << ile;
}