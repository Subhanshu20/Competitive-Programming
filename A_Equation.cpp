#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    if(n%2==0) cout<<n+4<<" "<<4;
    else cout<<n+9<<" "<<9;
    cout<<'\n';
    return 0;
}