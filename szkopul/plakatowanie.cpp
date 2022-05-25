#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    stack <int> stos;
    int licznik=0;
    int a, b;
        cin>>a>>b;
        stos.push(0);
        stos.push(b);
    for (int i =1; i<n; i++)
    {
        cin>>a>>b;
        if (b>stos.top())
            stos.push(b);
        else if (b==stos.top())
            continue;
        else if (b<stos.top())
        {
            while (b<stos.top())
            {
            stos.pop();licznik++;
            }
            if (b!=stos.top())stos.push(b);
        }

    }
   licznik+=stos.size();
    cout << licznik-1;
}
