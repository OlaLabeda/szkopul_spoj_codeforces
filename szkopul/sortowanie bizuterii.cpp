#include <iostream>
#include <algorithm>
using namespace std;
pair <int, string> tab[201];
bool compare (const pair <int, string>&i, const pair <int, string>&j)
{
    return i.first<j.first;
}
bool compare2 (const pair <int, string>&i, const pair <int, string>&j)
{
    return i.second<j.second;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    string s;
    for (int i =1; i<=n; i++)
        {cin>>s;
            tab[i]=make_pair(s.size(), s);
        }
        sort(tab, tab+n+1, compare);

        int licz=1;
    for (int i =2; i<=n; i++)
    {
        if (tab[i].first==tab[i-1].first)
            licz++;
        else if (i!=n && tab[i].first!=tab[i-1].first ||i==n &&  tab[i].first!=tab[i-1].first)
        {if (licz>1)
            {sort(tab+(i-licz), tab+i, compare2);licz=1;
        }
        }
        if (i==n&& tab[i].first==tab[i-1].first)
        {
            if (licz>1)
            {sort(tab+(i-licz)+1, tab+i+1, compare2);licz=1;
        }

        }
    }
 for (int i =1; i<=n; i++)
        {cout << tab[i].second<< "\n";
        }

}

