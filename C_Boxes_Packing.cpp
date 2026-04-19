#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     
    int n;
    cin>>n;
    int res=0;
    map<int,int>mpp;
    while(n--)
    {
        int x;
        cin>>x;
        mpp[x]++;
        res=max(res,mpp[x]);
    }
    cout<<res;
    return 0;
}  