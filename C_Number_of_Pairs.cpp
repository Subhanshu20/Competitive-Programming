#include <bits/stdc++.h>
using namespace std;
#define int long long
int sbs(vector<int>&v,int num,int low,int r1,int r2)
{
 
    int high=v.size()-1;
    int res=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(num+v[mid]>=r1&&num+v[mid]<=r2)
        {
            res=mid;
            high=mid-1;
        }
        else if(num+v[mid]<r1) low=mid+1;
        else if(num+v[mid]>r2) high=mid-1;
       

    }
    return res;
}
int hbs(vector<int>&v,int num,int low,int r1,int r2)
{
 
    int high=v.size()-1;
    int res=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(num+v[mid]>=r1&&num+v[mid]<=r2)
        {
            res=mid;
            low=mid+1;
        }
        else if(num+v[mid]<r1) low=mid+1;
        else if(num+v[mid]>r2) high=mid-1;
       

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
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
       
        sort(v.begin(),v.end());

       int cnt=0;

        for(int i=0;i<n;i++)
        {
           int num=v[i];
           int lindex=sbs(v,num,i+1,l,r);
           int hindex=hbs(v,num,i+1,l,r);
           if(lindex!=-1&&hindex!=-1)
           {
            cnt+=(hindex-lindex+1);
           }


        }
        
        cout<<cnt<<'\n';

    }
    return 0;
}