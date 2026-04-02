#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
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
        for(int &x:v) cin>>x;
        sort(v.begin(),v.end());
        int sum=0;
        for(int &x:v) sum+=(x-v[0]);
        cout<<sum<<'\n';


    }
    return 0;
}