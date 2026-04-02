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
   for(auto &x : v) cin>>x;
   sort(v.begin(),v.end());

   for(auto &x : v) cout<<x<<" ";
   cout<<'\n';
    return 0;
}