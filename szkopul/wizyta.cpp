#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n;
    cin>>n;
    vector <long long int> x;
    long long int rozmiar[n], maks;
    for (long long int i =0; i<n; i++)
        cin>>rozmiar[i];
    for (long long int i =0; i<n; i++)
       {
           cin>>maks;
           while (maks!=0)
           {
              x.push_back(rozmiar[i]);
               maks--;
           }

       }

        sort(x.begin(), x.end(), greater<long int>());

        for (long long int i =1; i<x.size(); i++)
        x[i]=x[i]+x[i-1];


        long long int testy;
        cin>>testy;
        long long int testyy;

        for (long long int i =0; i<testy; i++)
         {
             cin>>testyy;
           vector <long long int>::iterator it;
            it = lower_bound(x.begin(), x.end(), testyy);
            long long int z = it-x.begin();
    cout <<z+1<<"\n";

         }

}