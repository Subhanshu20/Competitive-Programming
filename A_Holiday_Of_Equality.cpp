#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   int n;
   cin>>n;
   vector<int>v(n);
   int maxx=0;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    maxx=max(maxx,v[i]);
   }
   int sum=0;
    for(int i=0;i<n;i++)
   {
     sum+=(maxx-v[i]);
   }
   cout<<sum<<'\n';
    return 0;
}