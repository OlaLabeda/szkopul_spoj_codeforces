#include <iostream>
#include <stack>
using namespace std;
int tab[1000007];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    stack <char> st;
    int n;
    string s;
    cin>>n>>s;
    if (n%2==1) {cout << "NIE"; return 0;}
    else
    {
        if (s[0]=='{'||s[0]=='('||s[0]=='[')
                st.push(s[0]);
        else {cout << "NIE"; return 0;}
         for (int i =1; i<n; i++)
        {
            if (s[i]=='{'||s[i]=='('||s[i]=='[')
                st.push(s[i]);
            else
            {
                if (st.empty())
                {
                    cout << "NIE"; return 0;
                }
                else
                {
                    if (st.top()=='{')
                        {

                            if (s[i]!='}')
                            {
                                cout << "NIE"; return 0;
                            }
                            else st.pop();
                        }
                    else if (st.top()=='(')
                        {
                            if (s[i]!=')')
                            {
                                cout << "NIE"; return 0;
                            }
                            else st.pop();
                        }
                     else if (st.top()=='[')
                        {
                            if (s[i]!=']')
                            {
                                cout << "NIE"; return 0;
                            }
                            else st.pop();
                        }
                }
            }
        }
if (!st.empty()) {cout << "NIE"; return 0;}
        int maks=0;
        for (int i =0; i<n; i++)
        {
            if (s[i]=='{'||s[i]=='('||s[i]=='[')
                    tab[i+1]=tab[i]+1;
            else tab[i+1]=tab[i]-1;
            if (tab[i]>maks)
                maks++;
        }
        cout << maks;
    }

}