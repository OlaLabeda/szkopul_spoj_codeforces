#include <iostream>
using namespace std;
int main ()
{
    string x;
    cin>>x;
 
    int d=0;
    for (int i =0; i<x.size();i++)
    {int licz=1;
        if (x.size()<=7)
           {
        cout << "NO";
        d=1;
      break;}
        else if (x[i]==x[i+6])
           {
        for (int j=i; j<i+6;j++)
        {
            if (x[j]==x[j+1])
                licz++;
            
 
        }
 
           }if (licz==7)
            {cout << "YES";
        d=1;
break;
     }
    }
    if (x.size()>7 && d==0)
        cout << "NO";
 
}
