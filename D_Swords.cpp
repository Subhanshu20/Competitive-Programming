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
    int gcd=0,cnt=0;
    int maxx=INT_MIN;
    for(auto &x:v)
    {    cin>>x;
         maxx=max(maxx,x);
    }

     for(auto x:v)
      {     
         gcd=__gcd(gcd,maxx-x);
         cnt+=(maxx-x);

     }
    
            
        cout<<cnt/gcd<<" "<<gcd<<'\n';

  

        return 0;
    }