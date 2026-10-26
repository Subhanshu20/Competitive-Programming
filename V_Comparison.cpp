#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n1,n2;
    char sy;
    cin>>n1>>sy>>n2;
    if(sy=='<')
    {
        if(n1<n2) cout<<"Right";
        else cout<<"Wrong";
    }
    else  if(sy=='>')
    {
        if(n1>n2) cout<<"Right";
        else cout<<"Wrong";
    }
    else if(n1==n2) cout<<"Right";
    else cout<<"Wrong";
    return 0;
}