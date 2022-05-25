#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n, m, a;
    cin>>n>>m>>a;
    double n1, n2;
    n1 = ceil(n/a);
    n2=ceil(m/a);
    long long int ans;
    ans=n1*n2;
    cout <<ans;
 
 
}
