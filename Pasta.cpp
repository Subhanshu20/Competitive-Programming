#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    bool flag=true;
    int m,n;
    cin>>n>>m;
    vector<int>v1(n),v2(m);
    for(auto &it:v1) cin>>it;
    for(auto &it:v2) cin>>it;
    for(auto &it2:v2)
    {   flag=false;
        for(auto &it1:v1)
        {
            if(it2==it1)
            {
                it1=-1;
                flag=true;
                break;
            }
        } 
        
        if(flag==false) break;
    }
    
    if(flag) cout<<"Yes";
    else cout<<"No";
    cout<<'\n';
    return 0;
}