#include <iostream>
using namespace std;
int memo[1007][1007];
int pal (string s1, string s2, int n)
{
    for (int i =0; i<n; i++)
    {
        for (int j =0; j<n; j++)
        {
            if (s1[i]==s2[j])
                memo[i+1][j+1]=memo[i][j]+1;
                else memo[i+1][j+1]=max(memo[i][j+1], memo[i+1][j]);
        }
    }
    return memo[n][n];

}
int main ()
{
    int n;
    cin>>n;
    string s1, s2;
    cin>>s1;
    for (int i =0;i<s1.size();i++)
        s2+=s1[s1.size()-1-i];
    cout <<pal(s1,s2, s1.size());

}