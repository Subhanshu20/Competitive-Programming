#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   long long int n,k;
   cin>>n>>k;
   if(n%2==0)
   {
     if(k<=n/2) cout<<k*2-1;
     else cout<<(k-n/2)*2;
   }
   else{
        
     if(k<=(n/2+1)) cout<<k*2-1;
     else cout<<(k-(n/2+1))*2;
   }
   cout<<'\n';
    return 0;
}