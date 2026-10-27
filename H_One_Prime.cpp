#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    bool flag=true;
    for(int i=2;i<t;i++)
    {
        if(t%i==0) flag=false;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}