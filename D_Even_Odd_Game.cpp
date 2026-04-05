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
        cin >> n;
        vector<int> v(n);
       for(auto &x:v) cin>>x;
        sort(v.begin(),v.end());
       int alice=0,bob=0;
       int  flag=1;
      for(int i=n-1;i>=0;i--)
      {
         if(flag)
         {
            if(v[i]%2==0) alice+=v[i];
            
         }
         else{
            if(v[i]%2!=0) bob+=v[i];
         }
         flag^=1;
      }
         
        if (alice == bob)
            cout << "Tie";
        else if (alice > bob)
            cout << "Alice";
        else
            cout << "Bob";
        cout << '\n';
    }
    return 0;
}   

