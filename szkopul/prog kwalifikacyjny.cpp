#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   long long int n;
    cin>>n;
    long long int p;
    vector<long long int> v;
    for (long long int i =0; i<n;i++)
        {cin>>p;
        v.push_back(p);}
    sort(v.begin(), v.end(), greater<long long int>());
    for (long long int i =1; i<v.size();i++)
        v[i]+=v[i-1];
    long long q,z;
    cin>>q;
    for (long long int i =0; i<q; i++)
    {
        cin>>z;
        vector<long long int>::iterator it;
        it=lower_bound(v.begin(), v.end(),z);
        cout <<it-v.begin()+1<<endl;
    }

}