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
        // code here
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]-i]++;
        }
        int res=0;
        for(auto it:mp)
        {
            res+=(it.second*(it.second-1))/2;
        }
        cout<<res<<'\n';


    }
    return 0;
}