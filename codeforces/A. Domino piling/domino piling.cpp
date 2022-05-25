#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned  int M, N;
    cin>>M>>N;
    if (N%2==0)
        cout << N/2*M;
    else if (M%2==0)
        cout << M/2*N;
    else cout << (M*N)/2;
}
