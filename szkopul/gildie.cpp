#include <iostream>
#include <vector>
using namespace std;
vector <int> v[500002];
char znak[200004];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m,a,b;
    cin>>n>>m;
    for (int i =0; i<m; i++)
    {
        cin>>a>>b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);

    }
    for (int i =0; i<n; i++)
    {
        if (znak[i]==0)
        {
            if (v[i].size()==0)
                {cout << "NIE";
                return 0;}
            else
            {
                znak[i]=1;
                for (int j =0; j<v[i].size(); j++)
                {
                    znak[v[i][j]]=2;
                }
            }

        }


    }
    cout << "TAK\n";
    for (int i =0; i<n;i++)
    {
        if (znak[i]==1)
            cout << "K\n";
        else cout << "S\n";

    }


}