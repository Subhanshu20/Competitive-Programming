#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll x,ll n)
{
    ll res=1;
    for(int i=1;i<=n;i++)
    {
        res=res*x;
        if(res>1e12) return -1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,p;
    cin>>n>>p;
    ll ans=1;
    if(n==1) cout<<p<<endl;
    else if(n>45) cout<<1<<endl;
    else{

        for(int i=2;i<=1e6;i++)
        {
            ll res=fun(i,n);
            
            if(res==-1) break;
            if(p%res==0) ans=i;
        }
        cout<<ans;
    }
    return 0;
}