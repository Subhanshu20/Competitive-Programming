    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
         int n=-1;
         while(n)
         {
              cin>>n;
              if(n==0) break;
              map<int,int>mpp;
              while(n%2==0)
              {
                mpp[2]++;c
                n=n/2;
              }
              for(int i=3;i*i<=n;i+=2)
              {
                  while(n%i==0)
                  {
                    mpp[i]++;
                    n=n/i;
                  }
              }
              if(n>1) mpp[n]++;
              for(auto it:mpp) cout<<it.first<<"^"<<it.second<<" ";
              cout<<'\n';
         }

        return 0;
    }