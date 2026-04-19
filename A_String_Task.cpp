#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    set<char>st={'A','a','E','e','I','i','O','o','U','u','Y','y'};
    string s;
    cin>>s;
    string res;
    for(auto it:s)
    {
        if(st.find(it)==st.end())
        {   if(it<=90) it+=32;
            res+=string(".")+it;
          
        }
    }
    cout<<res;

    return 0;
}