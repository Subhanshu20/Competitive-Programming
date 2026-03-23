    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    int a,b;    
    int gcd(int x,int y)
    {
        if(x==0) return y;
        return gcd(y%x,x);
    }
    int f(int x)
    {
        return (b/x)-((a-1)/x);
    }
    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
       int c,d;
       cin>>a>>b>>c>>d;
       
        
         int l=c/gcd(c,d)*d    ;
         
         cout<<(b-a+1)-(f(c)+f(d))+(f(l))<<'\n';




        return 0;
    }