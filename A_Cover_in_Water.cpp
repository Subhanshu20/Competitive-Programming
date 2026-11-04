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
       string s;
       cin>>n>>s;
       int cnt=0;
       int len=0;
       for(int i=0;i<n;i++)
       {
          if(s[i]=='.')
          { len++;
            cnt++;
          }
          else len=0;
          if(len==3){
            cnt=2;
            break;
          }
       }
       cout<<cnt<<'\n';
    }
    return 0;
}