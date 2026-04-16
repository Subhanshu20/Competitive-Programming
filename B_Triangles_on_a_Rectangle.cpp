#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int w,h;
        cin>>w>>h;
         int res=INT_MIN;
        for(int i=0;i<4;i++)
        {
            int k;
            cin>>k;
            int fp,sp;
            

            for(int j=0;j<k;j++)
            {
                int x;
                cin>>x;
                if(j==0) fp=x;
                if(j==k-1) sp=x;
            }
           
            res=max(res,((sp-fp)*((i>1)?w:h)));

        }
        cout<<res<<'\n';
    }
    return 0;
}