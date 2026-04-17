#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
     map<int,int>mpp;
     int res=0;
      int index=0;
     for(int i=0;i<t;i++)
     {  int x;
        cin>>x;
        if(mpp.find(x)!=mpp.end()&&mpp[x]>=index)
        {  
            res=max(res,i-index);
            index=mpp[x]+1;
        }
        mpp[x]=i;
     }
      res=max(res,t-index);
      cout<<res;
    return 0;
}