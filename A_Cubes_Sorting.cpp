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
           vector<int>v(n);
         for(auto &x : v) cin>>x;
         
        bool sp=true;
         for(int i=n-1;i>0;i--)
         { 
                if(v[i]>=v[i-1]){
                    sp=false;
                    break;

                }
                 
            }
            
         
         if(sp) cout<<"NO"<<'\n';
         else cout<<"YES"<<'\n';
    }
    return 0;
}