#include <bits/stdc++.h>
using namespace std;
int lb(vector<int>&psum,int x)
{
   
    int low=0;
    int high=psum.size();
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(psum[mid]<x) low=mid+1;
        else high=mid-1;

    }
    return low;
}
int ub(vector<int>&psum,int x)
{
   
    int low=0;
    int high=psum.size();
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(psum[mid]<=x) low=mid+1;
        else high=mid-1;

    }
    return high;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        vector<int>psum(n);
        psum[0]=0;
        sort(v.begin(),v.end());

        for(int i=1;i<n;i++)
        {
            psum[i]=(psum[i-1]+(v[i]-v[i-1]));

        }
        int ans=0;

        for(int i=n-1;i>0;i--)
        {
            int sum=v[i]+v[0];
            int st=(sum<r)?abs(l-sum):-1;
            int en=r-sum;
            int idx1=(st!=-1)?lb(psum,st):-1;
            if(sum+psum[idx1]>r||sum+psum[idx1]<l) idx1=-1;
            int idx2=(st!=-1)?ub(psum,en):-1;
            if(sum+psum[idx2]>r||sum+psum[idx2]<l) idx2=-1;

            if(st!=-1&&idx1!=-1){
            ans+=(idx2-idx1+1);
            if(idx1<=i&&idx2>=i) ans--;
            }

        }
        
        cout<<ans<<'\n';

    }
    return 0;
}