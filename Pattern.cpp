#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=t;j++)
        {
            if(i==1||i==5) cout<<"*";
            else if(j==(t-i+1)) cout<<"*";
			else cout<<" ";
        }
        cout<<'\n';
    }
    return 0;
}