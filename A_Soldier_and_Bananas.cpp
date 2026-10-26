#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k,n,w;
    cin>>k>>n>>w;
    int total_p=k*w*(w+1)/2;
    if(total_p>n) cout<<total_p-n;
    else cout<<0;

    return 0;
}


