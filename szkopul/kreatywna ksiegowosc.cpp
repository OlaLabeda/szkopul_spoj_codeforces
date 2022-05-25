#include <bits/stdc++.h>
using namespace std;

const int MAX_DNI = 2e5+7;
long long int sum[MAX_DNI];
set<long long>r;

int main() {
 int n;
 long long int m;
 long long int aktreszta, maxreszta;
 long long int x;
 set<long long>::iterator it;
 int i;

 cin >> n;
 cin >> m;

 for (i=1; i<=n; ++i) 
    { 
    cin >> x;
	sum[i] = (sum[i-1]+x) % m;
	sum[i] = (sum[i]+m) % m;
 }

 r.insert(0);
 maxreszta=0;
 for (i=1; i<=n; ++i) {
    it = r.upper_bound(sum[i]);
	if ( it != r.end() ) {
	   aktreszta = m - ((*it)-sum[i]);
	   maxreszta = max (maxreszta, aktreszta);
  	}
	aktreszta = sum[i];
	maxreszta = max (maxreszta, aktreszta);
   	r.insert(sum[i]);
 }

 cout << maxreszta << "\n";
 return 0;
}