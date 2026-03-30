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
            int n,m,k;
            
            cin>>n>>m>>k;
        
            int cnt2=0,cnt3=0;
            if(k==1) cout<<1<<'\n';
            else if(k>3)cout<<0<<'\n';
            else if(k==2)
                {  
                    if(n>=m) cout<<m<<'\n';
                    else{
                        int x=m/n-1;
                        cout<<n+x<<'\n';
                    }
                    
                }
                else{
                    
                   if(n>=m) cout<<0<<'\n';
                    else{
                         
                        int x=m/n-1;
                        cout<<m-n-x<<'\n';
                    }
                    
                    
                }
                
            
                
            
            
        }

        return 0;
    }