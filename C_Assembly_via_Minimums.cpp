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
         int x=n;
         n=n*(n-1)/2;
        vector<int>v(n);
        for(auto &x:v) cin>>x;
        int a=1,b=-1,c=-(2*n);
       
        sort(v.begin(),v.end());
        vector<int>res(x);
        int cnt=0;
        int num=v[0];   
        int idx=0;
        for(int i=0;i<n;i++)
        {
        
            if(num==v[i])
            {
                cnt++;
            }
            else{
                 while(cnt>0)
                 {
                    res[idx]=num;
                    cnt-=(x-idx-1);
                    idx++;
                 }
                cnt=1;
                num=v[i];
               

            }
          
        }
        while(cnt>0)
                 {
                    res[idx]=num;
                    cnt-=(x-idx-1);
                    idx++;
                 }
        res[idx]=num;
        for(auto it:res) cout<<it<<" ";
        cout<<'\n';
    }
    return 0;
}