#include <iostream>
using namespace std;
int n, m;
int pole[300][300];
void read ()
{
    cin>>n>>m;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin>>pole[i][j];
}
void process()
{
    for (int i =1; i<=n; i++)
        for (int j =1; j<=m; j++)
         pole[i][j]+=max(pole[i][j-1], pole[i-1][j]);
    cout << pole[n][m];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    read();
    process();
}