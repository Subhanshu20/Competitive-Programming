#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    int k=n/2;
    if(n%2==0) cout<<(k+1)*(k+1)<<'\n';
    else cout<<2*(k+1)*(k+2)<<'\n';
    return 0;
}