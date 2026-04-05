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
        int x;
        cin>>x;
        if(x>=0)
        {
            if(x!=67) cout<<x+1;
            else cout<<x;
        }
        else cout<<x;
        cout<<'\n';
    }
    return 0;
}