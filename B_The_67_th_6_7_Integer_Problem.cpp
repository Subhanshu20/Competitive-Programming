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
         int n=7;
         
        bool empty=true;
        bool one =true;
        vector<int>v(n);
        for(auto &x:v) cin>>x;
        sort(v.begin(),v.end());
        int res=v[6];
        
        for(int i=5;i>=0;i--)
        {
           
            res=res+(-1*v[i]);

           
            
        }
        cout<<res<<'\n';
       

    }
    return 0;
}