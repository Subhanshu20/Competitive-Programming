#include <bits/stdc++.h>
using namespace std;
bool subset(string &s,string &p)
{
    if(s.size()>p.size()) return false;
    int j=0;
    for(int i=0;i<s.size();i++)
    {
       while(j<p.size()&&s[i]!=p[j])
       {
         j++; 
       }
       if(i==s.size()-1 && j<p.size() && s[i]==p[j]) return true;
       j++;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        bool flag=true;
        unordered_map<char,int>um1;
        for(auto it:s) um1[it]++;
        for(auto it:p) um1[it]++;
        if(subset(s,t)) {
        for(auto it:t)
        {
             if(um1.find(it)==um1.end()) {flag=false;
                break;
             }
             else if(um1.find(it)!=um1.end())
             um1[it]--;

             if(um1[it]==0) um1.erase(it);
            
        }
    }
        else flag=false;        
        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
    }
    return 0;
}