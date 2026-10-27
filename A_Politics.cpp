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
    {   int res=1;
        int n,k;
        cin>>n>>k;
       string s;  
       cin>>s;
        for(int i=1;i<n;i++)
        {   string s2;
            cin>>s2;
            if(s==s2) res++;

        }
        
       cout<<res<<'\n';
    }
    return 0;
}