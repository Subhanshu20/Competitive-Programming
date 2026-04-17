#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    multimap<int,int>mp;
    int index=0;
    int n;
    cin>>n;
     for(int i=1;i<=t;i++)
    {
        int x;
        cin>>x;
       
        auto it=mp.find(n-x);
        if(it!=mp.end())
        {
            cout<<it->second<<" "<<i<<'\n';
            return 0;
        }
         mp.insert({x,i});
        

    }
    cout<<"IMPOSSIBLE";
    return 0;
}