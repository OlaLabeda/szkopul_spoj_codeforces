#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
const int MAX=1000007;
int ludzie[MAX];
multiset<int> klamry;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin>>n>>k;
    int pom;
    for (int i =1; i<=n; i++)
        cin>>ludzie[i];
    sort (ludzie+1, ludzie+n+1, greater<int>());
    for (int i =1; i<=k; i++)
        {cin>>pom; klamry.insert(pom);}

        for (int i =1; i<=n; i++)
        {
            if (klamry.lower_bound(ludzie[i]*5)!=klamry.end())
            {//cout <<*klamry.lower_bound(ludzie[i]*5)<< endl;
            klamry.erase(klamry.lower_bound(ludzie[i]*5));}
            else
            {
                if (klamry.lower_bound(ludzie[i]*3)!=klamry.end())
                {
                   // cout <<*klamry.lower_bound(ludzie[i]*3)<< endl;
                    klamry.erase(klamry.lower_bound(ludzie[i]*3));
                    {
                        if (klamry.lower_bound(ludzie[i]*2)!=klamry.end())
                        {
                            //cout <<*klamry.lower_bound(ludzie[i]*2)<< endl;
                            klamry.erase(klamry.lower_bound(ludzie[i]*2));
                        }
                    }
                }
                else
                {
                    cout << "NIE";
                    return 0;
                }

            }
    }
    cout<< k-klamry.size();
}