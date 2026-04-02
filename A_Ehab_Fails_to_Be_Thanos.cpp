#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(2*n);
   
    for(auto &it:v) {
        cin>>it;
    }
     sort(v.begin(),v.end());

    if(v[0]!=v[2*n-1])
    {
          for(auto &it:v) {
          cout<<it<<" ";
          }
          cout<<'\n';
    }
    else
     cout<<-1<<'\n';
    
    


    return 0;
}