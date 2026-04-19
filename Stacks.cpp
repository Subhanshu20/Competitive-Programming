#include <bits/stdc++.h>
using namespace std;
int lb(vector<int>&v,int x)
{
    int low=0;
    int high=v.size()-1;
    int res=-1;
    while(low<=high)
    {   
        int mid=low+(high-low)/2;
        if(v[mid]>x)
        {
            res=mid;
            high=mid-1;
        }
        else low=mid+1;

    }
    return res;
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
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            int idx=lb(v,x);
            if(idx!=-1) v[idx]=x;
            else v.push_back(x);

        }
        cout<<v.size()<<" ";
        for(auto it:v) cout<<it<<" ";
        cout<<'\n';
        
    }
    return 0;
}