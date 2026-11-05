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
       char arr[n][n];
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
       }
       int res=0;
         for(int i=0;i<n/2;i++)
       { 
           if(i==n/2) break;
        for(int j=i;j<n-i-1;j++)
        {   int cnt_0=0,cnt_1=0;
            
            if(arr[i][j]=='0') cnt_0++;
            else cnt_1++;
            if(arr[j][n-i-1]=='0') cnt_0++;
            else cnt_1++;
            if(arr[n-i-1][n-j-1]=='0') cnt_0++;
            else cnt_1++;
            if(arr[n-j-1][i]=='0') cnt_0++;
            else cnt_1++;
            if(cnt_0<=cnt_1) res+=cnt_0;
            else res+=cnt_1;
        }
       }
       cout<<res<<'\n';
    }
    return 0;
}