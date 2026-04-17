#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    map<int,int>mp;
    while (t--)
    {
        int x;
        cin>>x;
        mp[x]++;
      
    }
    int res=0;
    for(auto it:mp)
    {
       
        res+=(it.second<it.first)?it.second:it.second-it.first;
       
    }
    cout<<res<<'\n';
    return 0;
} 


