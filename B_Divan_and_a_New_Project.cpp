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
        for(auto &it:v) cin>>it;
        int mid=(n+1)/2;
        vector<int>arr=v;
        sort(v.begin(),v.end(),greater<int>());
        multimap<int,int>mpp;
        int temp=0;
       for(int i=1;i<=n;i++)
       { if(i%2!=0) temp++;
         if(i%2==0) mpp.insert({v[i-1],mid+temp});
         else mpp.insert({v[i-1],mid-temp});

       }
       
       int sum=0;
       vector<int>res(n);
       for(int i=0;i<n;i++){
        auto ele=mpp.find(arr[i]);
         res[i]=ele->second;
         mpp.erase(ele);
         sum+=(2*abs(mid-res[i])*arr[i]);
       }
       cout<<sum<<'\n'<<mid<<" ";
       for(auto it:res)
       cout<<it<<" ";
       cout<<'\n';
       
       
    }
    return 0;
}