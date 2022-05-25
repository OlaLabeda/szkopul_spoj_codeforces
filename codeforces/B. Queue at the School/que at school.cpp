#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int a;int b;
    string s;
    cin>>a>>b>>s;
    while (b!=0)
      {
 
       int j =0;
        while (j<=a-1)
        {
            int l=0;
 
                if (s[j+1]=='G' && s[j+1])
                {
                    swap(s[j], s[j+1]);
                    l++;
 
                }
if (l>0)
    j+=2;
else
             j++;
 
        }
 
    b--;
}
    cout <<s;
}
