#include <iostream>
using namespace std;
int main ()
{
    string p;
    cin>>p;
bool c=0;
    for (int i =0;i<p.size();i++)
    {
        if (p[i]=='H'||p[i]=='Q'||p[i]=='9')
        {
            cout << "YES";
            c=1;
            break;
        }
 
    }if (c==0) cout << "NO";
}
