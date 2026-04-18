#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int res=0;
        for(int i=1;i<=n;i++)
        { 
          int val;
          cin>>val;
          if(i<=val) continue;
          res+=lower_bound(v.begin(),v.end(),val)-v.begin();
          v.push_back(i);
         
        }
       
        cout<<res<<'\n';
    }
    return 0;
}