#include <iostream>
#include <stack>
using namespace std;
stack<char> s;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    bool czy =0;
    string sl; int n, cnt=0, mini=0;
        cin>>n>>sl;

    for (int i =0; i<n; i++)
    {
        if (sl[i]=='{'||sl[i]=='['||sl[i]=='(')
                s.push(sl[i]);
        else
        {
            if (!s.empty())
            {if (s.top() =='(' && sl[i]==')'||s.top() =='{' && sl[i]=='}'||s.top() =='[' && sl[i]==']')
                s.pop();
            else { czy=1; break;}}
            else {czy=1; break;}
        }

    }
    if (czy==0 && n%2==0 && s.empty())
    {
         for (int i =0; i<n; i++)
            {
                if (sl[i]=='{' || sl[i]=='[' || sl[i]=='(')
                   mini++;
                else mini--;
                cnt = max(mini, cnt);
            }
            cout << cnt;
    }
    else cout << "NIE";
}
