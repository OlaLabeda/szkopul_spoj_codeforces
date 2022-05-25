#include <bits/stdc++.h>
using namespace std;
int a, b, n, p, k, bin;
vector <int> divisors;
void common_divisors(int a, int b)
{
    int p = __gcd(a, b); //najwiekszy wspolny dzielnik obu liczb zawiera w sobie wszytskie wspolne dzielniki
    for (int i =1; i<=sqrt(p); i++) //znajduje wspolne dzielniki SZYBKO
    {
        if (p%i==0)
        {
            divisors.push_back(i);
            if (p/i!=i)
            divisors.push_back(p/i);
        }
    }
    sort(divisors.begin(), divisors.end());
}
int binsearch (int target) //znajduje binarnie najwieksza wartosc ktora jest mniejsza rowna targetowi
{
    int low=0, high=divisors.size()-1, mid;
    while (low<high)
    {
        mid = (low+high+1)/2;
        if (divisors[mid]>target)
            high=mid-1;
        else
            low=mid;
    }
    return divisors[low];
}
int main ()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>a>>b>>n;
    common_divisors(a, b);
    for (int i=1; i<=n; i++)
    {
        cin>>p>>k;
        bin=binsearch(k);
        if (bin>=p ) //jezeli bin wychodzi poza dany zakres => falsz
            cout << bin << "\n";
        else
            cout << -1 << " \n";
    }
}
