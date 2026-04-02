#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   vector<int>v={1,1,1,3,3};
   auto l=lower_bound(v.begin(),v.end(),1);
    auto u=lower_bound(v.begin(),v.end(),1);
    cout<<u-l;
    
    return 0;
}