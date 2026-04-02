#include <bits/stdc++.h>
using namespace std;
int bs(vector<int>&v,int k,int n)
{
     int low=0,high=n-1;
     while(low<=high)
     {
        int mid=low+(high-low)/2;
        if(v[mid]<=k) low=mid+1;
        else high=mid-1;
     }
     return low;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
     vector<int>q(k);
    for(auto &x:v) cin>>x;
    for(auto &x:q) cin>>x;
    for(int i=0;i<k;i++)
    {
        cout<<bs(v,q[i],n)<<'\n';

    }
    return 0;
}