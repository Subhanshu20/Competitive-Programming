#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
    int n;
    cin>>n;

    vector<int>v(n);
    for(auto &x:v) cin>>x;
     int res=v[0];
     int r=1000000000000000000LL;
     if(res!=0)
     r=1000000000000000000LL/res;
     bool flag=true;
    for(int i=1;i<n;i++)
    {   
       if(v[i]==0||v[i]<=r)
       { 
         res*=v[i];
         if(res==0) break;
         r=1000000000000000000LL/res;
       }
       else{
         flag=false;
        
       }
    }
    if(flag||res==0) cout<<res;
    else cout<<-1;
    cout<<'\n';

    

    return 0;
}