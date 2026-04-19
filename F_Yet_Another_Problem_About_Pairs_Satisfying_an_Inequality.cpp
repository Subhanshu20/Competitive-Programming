#include <bits/stdc++.h>
using namespace std;

#define int long long

int lb(vector<int>&v,int x)
{
    int low=0;
    int high=v.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(v[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return low;
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
        int n;
        cin>>n;
        vector<int>v;
        int res=0;
        for(int i=1;i<=n;i++)
        { 
          int val;
          cin>>val;
          if(i<=val) continue;
          res+=(lb(v,val));
          v.push_back(i);
         
        }
       
        cout<<res<<'\n';
    }
    return 0;
}