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
        if(n%3==0) cout<<"Second";
        else cout<<"First";
        cout<<'\n';
    }
    return 0;
}