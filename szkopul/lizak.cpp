#include<bits/stdc++.h>
using namespace std;
constexpr int M=2e6+7;
pair<int,int>ans[M];
int n,m,k, totalsum, ostatni1, pierwszy1;
string s;
void totsum()
{
    int pom = n;
    while (pom>0)
    {
        if (s[pom-1]=='T')
        totalsum+=2;
        else
        {
            totalsum++;
            if (!ostatni1)ostatni1=pom;
            pierwszy1=pom;

        }pom--;
    }
}
void firstparz()
{
    int pom=totalsum;
    int p = 1, k=n;
    while (pom>0)
    {
        ans[pom].first=p; ans[pom].second=k;
        if (s[p-1]=='T')
            p++;
        else if (s[k-1]=='T')
            k--;
        else
            {p++; k--;}
            pom-=2;
    }
}
void secondparz()
{

  if (n-ostatni1<pierwszy1-1)
        {totalsum-=2*(n-ostatni1)+1; ostatni1--; pierwszy1=1;}
    else
        {totalsum-=2*(pierwszy1-1)+1; pierwszy1++;ostatni1 =n;}
    while (totalsum>0 )
    {
        ans[totalsum].first=pierwszy1;
        ans[totalsum].second=ostatni1;
        if (s[pierwszy1-1]=='T')
            pierwszy1++;
        else if (s[ostatni1-1]=='T')
            ostatni1--;
        else
        {
            ostatni1--;
            pierwszy1++;
        }

        totalsum-=2;
    }
}
void zwroc()
{
    for (int i =1; i<=m; i++)
    {
        cin>>k;
        if (ans[k].first!=0)
        cout << ans[k].first<< " "<< ans[k].second<<"\n";
        else cout << "NIE\n";
    }
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >>n>>m>>s;
    totsum();
    firstparz();
    secondparz();
    zwroc();
}