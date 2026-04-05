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
       int r,c;
       cin>>r>>c;
       vector<vector<int>>v(r,vector<int>(c));
       for(int i=0;i<r;i++)
       {
        for(int j=0;j<c;j++)
        {
            int x;
            cin>>x;
            v[i][j]=x;
        }
       }
       int sum=0;
       for(int i=0;i<r-1;i++)
       {
        for(int j=i+1;j<r;j++)
       
        {
            for(int k=0;k<c;k++)
            {
                sum+=abs(v[i][k]-v[j][k]);
            }
        }
       }

       cout<<sum<<'\n';
    }
    return 0;
}