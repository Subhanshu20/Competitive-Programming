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
         int n,m;
         int flag=false;
         cin>>n>>m; 
         vector<int>v(n);
         for(int i=0;i<n;i++)
         {
            int x;
            cin>>x;
            v[i]=x%m;   
         }
         for(int i=0;i<n-1;i++)
         {   int len=1;
           
             while(v[i]==v[i+1]&&i<n-1)
             {
                    len++;
                    i++;
             }
             if(len>=m)
             {
                flag=true;
                break;
             }
         }
         if(flag) cout<<"NO";
         else cout<<"YES";
         cout<<'\n';

    }
    return 0;
}