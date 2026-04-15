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
       vector<int>v(101,0);
       bool flag=false;

       for(int i=0;i<n;i++)
       {
        int x;
        cin>>x;
        v[x]++;
        if(v[x]>1) flag=true;

       }

       if(flag) cout<<-1;
       else{
        for(int i=100;i>=0;i--)
        {
           if(v[i]!=0) cout<<i<<" ";
        }
       }
       cout<<'\n';
    }
    return 0;
}