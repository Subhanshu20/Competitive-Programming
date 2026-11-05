#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,w;
    cin>>n>>w;
    set<int>s;
    vector<int>val(n);
    for(int i=0;i<n;i++)
    cin>>val[i];
     for(int i=0;i<n;i++){
        if(val[i]<=w)
        s.insert(val[i]);
      for(int j=i+1;j<n;j++){
        if(val[i]+val[j]<=w)
        s.insert(val[i]+val[j]);
       for(int k=j+1;k<n;k++){
        if(val[i]+val[j]+val[k]<=w)
        s.insert(val[i]+val[j]+val[k]);
       }
      }
     }
     cout<<s.size()<<'\n';
    return 0;
}