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
       string s;
       cin>>s;
       int cnt_t=0,cnt_m=0;
       int cnt_t_r=0,cnt_m_r=0;
       bool l_r=true,r_l=true;
       for(int i=0;i<n;i++)
       {
          if(s[i]=='T') cnt_t++;
          else cnt_m++;
          if(cnt_t<cnt_m){
            l_r=false;
          }
       }
        for(int i=n-1;i>=0;i--)
       {
          if(s[i]=='T') cnt_t_r++;
          else cnt_m_r++;
          if(cnt_t_r<cnt_m_r){
            r_l=false;
          }
       }
       if(l_r&&r_l&&(2*cnt_m==cnt_t))
       cout<<"YES";
       else cout<<"NO";
       cout<<'\n';
    }
    return 0;
}