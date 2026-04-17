#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
        unordered_set<string>s;
        s.insert("a");
        s.insert("b");
        s.insert("c");
        s.insert("b");
    
     for(auto it:s)
    {
        cout<<it<<'\n';
    }
    return 0;
}