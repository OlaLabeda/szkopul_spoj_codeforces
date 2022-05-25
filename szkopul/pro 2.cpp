#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int minx=230, miny=230, maxx=0, maxy=0;
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        int x, y;
        cin>>x>>y;
        minx=min(x, minx);
        miny=min(y, miny);
        maxx=max(maxx, x);
        maxy=max(maxy, y);
    } if (n==1)
    {cout << 1; return 0;}
    if (maxx==minx) maxx++;
    if (miny==maxy)maxy++;
    cout<<(maxx-minx)*(maxy-miny);
}