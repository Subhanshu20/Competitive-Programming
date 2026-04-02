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
         int cnt=0;
         for(int i=n-1;i>0;i--)
         {
            for(int j=i-1;j>=0;j--)
            {
                if(v[j]>v[i]){
                    swap(v[j],v[i]);
                    cnt++;
                }
            }
         }
         if(cnt>(n*n-1)/2-1) cout<<"NO"<<'\n';
         else cout<<"YES"<<'\n';
    }
    return 0;
}