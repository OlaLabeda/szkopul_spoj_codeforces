#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>v;
vector<int>::iterator it;
void ifprime (int n)
{
    bool prime[n+1];
    for (int i =2; i<=n; i++)
        prime[i]=1;
    for (int i =2; i*i<=n; i++)
    {
        if (prime[i]==1)
        {
            for (int j =i*i; j <=n;j+=i)
            prime[j]=0;
        }
    }
    for (int i =2; i<=n; i++)
        if (prime[i])
        v.push_back(i);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int n;
   cin>>n;
   int k;
   cin>>k;
   ifprime(n);
   int licznik=0;
   for (int i =0; i<v.size();i++)
   {
       it = find(v.begin(), v.end(), v[i]+v[i+1]+1);
       if (it!=v.end())
        licznik++;
   }
   if (licznik>=k)
    cout << "YES";
   else cout << "NO";
}
