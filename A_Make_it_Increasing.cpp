#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>b(n,0);
    for(auto &x:v) cin>>x;
    int res=INT_MAX;

    for(int i=0;i<n;i++)
    {   int lcnt=0;
        int rcnt=0;
        b[i]=0;
        for(int j=i+1;j<n;j++)
        {
           int i=abs(b[j-1])/v[j]+1;
           b[j]=v[j]*i;
           rcnt+=i;
        }
        for(int j=i-1;j>=0;j--)
        {
           int i=abs(b[j+1])/v[j]+1;
           b[j]=v[j]*i;
           lcnt+=i;
        }
        res=min(res,(rcnt+lcnt));
    }
    cout<<res<<'\n';
    return 0;
}