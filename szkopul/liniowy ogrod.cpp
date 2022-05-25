#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; long long MOD;
    string s;
    cin>>n>>MOD>>s;
    vector <long long> pw(n+1);
    pw[0]=1;
    for (int i =1; i<=n; i++)
        pw[i]=(pw[i-1]*2)%MOD;
    long long ans=0;
    int lo=0, hi=0, cur=0;
    int k=n;
    for (int i =0; i<s.size(); i++)
    {
        k--;
        if (s[i]=='P')
        {
            int tmp=cur+1;
            int tmplo=min(tmp, lo);
            int tmphi=max(tmp, hi);
            if (tmphi-tmplo==2)
            {
                if (tmp==(tmphi+tmplo)/2)
                    ans=(ans+pw[k+1]/2)%MOD;
                else ans=(ans+pw[k/2])%MOD;
            }
            else if (tmphi-tmplo==1)
                ans=((ans+pw[k/2]+pw[(k+1)/2]-1)%MOD+MOD)%MOD;
        cur--;

        }
        else
            cur++;
        lo=min(lo, cur);
        hi=max(hi, cur);
    }
    cout << (ans+1)%MOD;

}