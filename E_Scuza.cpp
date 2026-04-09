#include <bits/stdc++.h>
using namespace std;
#define int long long
int bs(vector<int>&a,int n,int k)
{
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]<=k)
        {
            res=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n),k(q);
        for(auto &it:a) cin>>it;
         for(auto &it:k) cin>>it;
         vector<int>psum(n),pmax(n);
         psum[0]=a[0];
         pmax[0]=a[0];
          for(int i=1;i<n;i++)
        {
             
             pmax[i]=max(pmax[i-1],a[i]);
             psum[i]=psum[i-1]+a[i];
        }
        
        for(auto it:k)
        {
            int index=bs(pmax,n,it);
            if(index==-1) cout<<0<<" ";
            else cout<<psum[index]<<" ";
        }
        cout<<'\n';


         

    }
    return 0;
}