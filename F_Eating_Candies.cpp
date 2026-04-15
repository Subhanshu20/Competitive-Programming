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
        vector<int>v(n);
        for(auto &it:v) cin>>it;
        vector<int>fsum(n),lsum(n);
        fsum[0]=v[0];
        lsum[n-1]=v[n-1];
        for(int i=1;i<n;i++)
        {
            fsum[i]=v[i]+fsum[i-1];
        }
        for(int i=n-2;i>0;i--)
        {
            lsum[i]=v[i]+lsum[i+1];
        }
        int l=0,h=n-1;
        int res=0;
        while(l<h)
        {
            if(fsum[l]>lsum[h]) h--;
            else if(fsum[l]<lsum[h]) l++;
            else {
                res=l+1+(n-h);
                h--;
                l++;
            }
        }
        cout<<res<<'\n';


    }
    return 0;
}