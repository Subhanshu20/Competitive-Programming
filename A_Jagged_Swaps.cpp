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
        int ele=-1;
        while(n--)
        {    int x;
            cin>>x;
            if(ele==-1) ele=x;
        }
        if(ele==1) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';

    }
    return 0;
}