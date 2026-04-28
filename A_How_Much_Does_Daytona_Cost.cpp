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
        int n,k;
        cin>>n>>k;
        bool flag=false;
        while(n--)
        {   int x;
            cin>>x;
            if(x==k) flag=true;
        }
        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';

    }
    return 0;
}