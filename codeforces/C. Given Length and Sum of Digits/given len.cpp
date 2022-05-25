#include <iostream>
using namespace std;
int main ()
{
int m, s;
int k;
cin>>m>>s;
if (s<1&&m>1 || s>9*m)
    cout << "-1 -1";
else
{
    for (int i = m-1,  k =s; i>=0;i--)
    {
        int j = max(0, k-9*i);
        if (j==0 && i==m-1 &&k)
            j=1;
            cout << j;
        k-=j;
 
    }
    cout << " ";
    for (int i =m-1, k=s; i>=0; i--)
    {
        int j = min(9, k);
        cout << j;
       k-=j;
    }
 
 
}
}
