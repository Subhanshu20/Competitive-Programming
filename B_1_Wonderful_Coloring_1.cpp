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
        int cnt1=0,cnt2=0;
        string s;
        cin>>s;
        vector<int>v(26,0);
        for(auto it:s)
        {
            v[it-97]++;
        }

        for(auto it:v)
        {
            if(it==1) cnt1++;
            else if(it>1) cnt2++;
        }
        cout<<cnt1/2+cnt2<<'\n';
        
    }
    return 0;
}