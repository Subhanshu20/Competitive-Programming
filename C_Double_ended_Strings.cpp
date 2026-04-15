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
        string a,b;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        int res=0;
        for(int len=1;len<=min(n,m);len++)
        {
            for(int j=0;j+len<=n;j++)
            {
                for(int k=0;k+len<=m;k++)
                {
                    if(a.substr(j,len)==b.substr(k,len))
                    res=len;
                }
            }
        }
        cout<<(n+m)-(2*res)<<'\n';
    }
    return 0;
}