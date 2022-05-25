#include <iostream>
#include <set>
using namespace std;
int main ()
{
    string x;
    cin>>x;
    set<char> name;
    for (int i =0;i<x.size();i++)
        name.insert(x[i]);
    if (name.size()%2==0)
    cout <<"CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}
