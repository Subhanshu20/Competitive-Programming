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
        if(n>=1900) cout<<"Division 1";
        else if(n>=1600&&n<=1899) cout<<"Division 2";
        else if(n>=1400&&n<=1599) cout<<"Division 3";
        else cout<<"Division 4";
        cout<<'\n';
    }
    return 0;
}