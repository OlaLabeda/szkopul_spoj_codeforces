//Aleksandra Labeda
#include <bits/stdc++.h>
using namespace std;
long long m;
vector <long long> divisors;
vector <long long> fib;
long long checkifanyfib (long long number)
{
	vector<long long int>::iterator pom=upper_bound(fib.begin(), fib.end(), number/2);
	long long int x=(pom-fib.begin())+1;
	int counting=0, sum=0;
	while (number>1)
	{
		if (x==0) return 0;
		while (number%fib[x]==0)
		{
			//cout << " x "<< x<< endl;
			number/=fib[x];
			counting++;
			sum+=x+1;
		}
		x--;
	}
	return sum+counting-1;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>m;
	long long wsparcie =m;
	if (m==1) cout <<1;
	else if (m==2) cout <<2;
	else if (m>2)
	{
		//jesli ez nie trzeb akombinowac ;)
		long long h1=1, h2=2, f=0, l=2;
		fib.push_back(1); fib.push_back(2);
		while (f<m)
		{
			f=h1+h2;
			fib.push_back(f);
			h1=h2;
			h2=f;
			l++;
		}
		if (m==f)
			cout <<l;
		else
		{
		//	cout << " fib 1 "<< fib[1]<< endl;
				vector<long long int>::iterator v=upper_bound(fib.begin(), fib.end(), m);
				for (long long int i =v-fib.begin()-1; i>0; i--)
				{
					
					if (m%fib[i]==0)
					{
						long long wynik=checkifanyfib(m/fib[i]);
						if (wynik!=0)
						{
							cout << i+2+wynik<<endl;
							return 0;
						}
					}
				}
				cout << "NIE";
		}
	}
}
