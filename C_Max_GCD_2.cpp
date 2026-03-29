#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    map<int,int>mpp;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    for(int i=0;i<n;i++)
    {  
        mpp[v[i]]++;
        if(v[i]%2==0){
            int div=2;
             while(v[i]%div==0)
        {
            mpp[(v[i]/div)]++;
            div*=2;
        }

        }
         if(v[i]%3==0){
            int div=3;
             while(v[i]%div==0)
        {
            mpp[(v[i]/div)]++;
            div*=3;
        }

        }
        
         
    }
    int res=-1;
    for(auto it:mpp)
    {
        if(it.second==n)
        {
            res=max(res,it.first);
        }
    }

    int cnt=0;
    if(res!=-1)
    {
         for(auto x:v)
         {    if(x==res) continue;
            else if((x/res)%3==0) cnt+=x/res;
             else if((x/res)%2==0) cnt+=x/res;

         }
    }
    if(res==-1) cout<<-1;
    else
    cout<<res;
    cout<<'\n';


    return 0;
}