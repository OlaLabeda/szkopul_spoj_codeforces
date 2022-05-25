#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string x;
    cin>>x;
    x.erase(remove(x.begin(), x.end(), 'A'), x.end());
     x.erase(remove(x.begin(), x.end(), 'E'), x.end());
      x.erase(remove(x.begin(), x.end(), 'I'), x.end());
       x.erase(remove(x.begin(), x.end(), 'O'), x.end());
        x.erase(remove(x.begin(), x.end(), 'U'), x.end());
         x.erase(remove(x.begin(), x.end(), 'Y'), x.end());
        x.erase(remove(x.begin(), x.end(), 'a'), x.end());
     x.erase(remove(x.begin(), x.end(), 'e'), x.end());
      x.erase(remove(x.begin(), x.end(), 'i'), x.end());
       x.erase(remove(x.begin(), x.end(), 'o'), x.end());
        x.erase(remove(x.begin(), x.end(), 'u'), x.end());
         x.erase(remove(x.begin(), x.end(), 'y'), x.end());
 
         for (int i =0; i< x.length(); i++)
         {
             if (x[i]>=65 &&x[i]<=90)
                x[i]+=32;
         }
for (int i =0; i<x.length(); i+=2)
{
    x.insert(i, ".");
 
}
cout << x;
}
