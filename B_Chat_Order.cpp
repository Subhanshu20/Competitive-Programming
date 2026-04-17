#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    unordered_set<string>us;
    vector<string>v;
    while (t--)
    {
      string s;
      cin>>s;
      v.push_back(s);
    }
    
    for(int i=v.size()-1;i>=0;i--)
    {
        if(us.find(v[i])==us.end())
        {
            cout<<v[i]<<'\n';
            us.insert(v[i]);
        }
    }
 
    return 0;
}