#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    string x;
    cin>>x;
 
    for (int i =0;i<x.size();i+=2)
    {
        for (int j =0; j<x.size();j+=2)
        {if ((int)x[i]<(int)x[j] )
        swap(x[i], x[j]);
        }
 
 
 
    }
    cout << x;
}
