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
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        int z_st=-1,z_end=-1;
        int o_st=-1,o_end=-1;
        vector<int>res;
        bool flag=false;
        if(v[n-1]==0) flag=true;
        for(int i=n-1;i>=0;i--)
        {
             if(v[i]==1)
          { 
            if(o_st==-1) o_st=i;
             o_end=i;
            res.push_back(0);
          }
            
          if(v[i]==0||i==0)
          {  
            
            if(o_end!=-1)
            {
              res.pop_back();
              res.push_back(o_st-o_end+1);
              z_st=i;
              z_end=-1;
              o_st=-1;
              o_end=-1;
             
            }
            if(z_st==-1)z_st=i;
             z_end=i;
             if(v[i]!=1)
            res.push_back(0);
          }
         

        }
        
        if(flag)
        {
            cout<<"YES"<<'\n';
            for(auto it:res) cout<<it<<" ";
            
        }
        else cout<<"NO";
        cout<<'\n';
    }
    return 0;
}