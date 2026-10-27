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
       int x,y;
       cin>>x>>y;
       if(y>=-1) cout<<"YES";
       else cout<<"NO";
       cout<<'\n';
    }
    return 0;
}