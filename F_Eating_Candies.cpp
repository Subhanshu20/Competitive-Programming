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
       
        int fsum=v[0];
        int lsum=v[n-1];
       
        int l=0,h=n-1;
        int res=0;
        while(l<h)
        {
            if(fsum>lsum) {
                h--;
                lsum+=v[h];
            }
            else if(fsum<lsum) 
            {   l++;
                fsum+=v[l];
            }
            else {
                res=l+1+(n-h);
                h--;
                l++;
                lsum+=v[h];
                fsum+=v[l];
            }
        }
        cout<<res<<'\n';


    }
    return 0;
}