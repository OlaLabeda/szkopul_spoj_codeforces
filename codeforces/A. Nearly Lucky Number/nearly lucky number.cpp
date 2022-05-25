#include <iostream>
using namespace std;
int main ()
{
   unsigned long long int x;
   cin>>x;
   unsigned long long int licznik=0;
  while (x!=0)
   {
       if (x%10== 4 ||x%10==7)
        licznik++;
       x/=10;
 
   }
   bool czy=0;
  while (licznik!=0)
   {
       if (licznik%10==7||licznik%10==4)
        czy=1;
       else{czy =0; break;}
       licznik/=10;
 
   }
if (czy)
    cout << "YES";
else cout << "NO";
}
