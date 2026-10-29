#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(abs(b-c)%2==0&&a>=abs(b-c)%2) cout<<1<<" ";
    else cout<<0<<" ";
    if(abs(a-c)%2==0&&b>=abs(a-c)%2) cout<<1<<" ";
    else cout<<0<<" ";
    if(abs(a-b)%2==0&&c>=abs(a-b)%2) cout<<1;
    else cout<<0;
    cout<<'\n';
    }
    return 0;
}