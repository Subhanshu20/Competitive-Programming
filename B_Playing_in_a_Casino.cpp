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
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               cin>>v[i][j];
            }
        }
        vector<vector<int>>c(m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               c[j].push_back(v[i][j]);
            }
        }
        int res=0;
        for(int i=0;i<m;i++)
        {  sort(c[i].begin(),c[i].end());
            for(int j=0;j<n;j++)
            {
                res+=(c[i][j]*j)-(c[i][j]*(n-1-j));
            }

    
        }
       
        cout<<res<<'\n';

    }
    return 0;
}