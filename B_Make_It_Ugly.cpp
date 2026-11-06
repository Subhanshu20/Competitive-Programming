#include <bits/stdc++.h>
using namespace std;

int main()
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
        for(auto &it:v) cin>>it;
        int res=-1;
        int st;
        for(int i=0;i<n;i++)
        {
           if(v[i]!=v[0])
           {
             if(res==-1)
             {
                st=i;
                res=i;
             }
             else{
                res=min(res,i-st-1);
                st=i;
             }
           }
        }
        if(res!=-1)
        res=min(res,n-st-1);

        
        cout<<res<<'\n';
    }
    return 0;
}