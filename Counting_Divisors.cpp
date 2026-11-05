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
       int cnt=0;
       for(int i=1;i*i<=n;i++)
       {
         if(n%i==0) cnt+=2;
         if(n%i==0&&n/i==i) cnt--;  
       }
       cout<<cnt<<'\n';
    }
    return 0;
}