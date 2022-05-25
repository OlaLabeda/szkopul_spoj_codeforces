#include <iostream>
using namespace std;
int main ()
{
    int q, a, b, n, s;
    cin>>q;
    for (int i =1; i<=q; i++)
    {
       cin>>a>>b>>n>>s; //a monet o wartosci n i b monet o wartosci jedne
       int x=s/n;
       if (x>a)
       {
            int y = x-a;
            y*=n;
            s-=a*n;
            if (s<=b)
                cout << "YES\n";
            else cout << "NO\n";
       }
       else
       {
           int y =n*x;
           s-=y;
           if (s<=b)
            cout << "YES\n";
           else cout << "NO\n";
 
       }
 
    }
}
