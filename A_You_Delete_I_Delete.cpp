#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        string temp="";
         bool z=false;
        bool o=false;
        for(int i =0;i<s.length();i++)
        {
           if(s[i]=='0'){
           if(!z) z=true;
           else temp+='0';
           }
            if(s[i]=='1'){
           if(!o) o=true;
           else temp+='1';
           }
           


        }
        cout<<temp<<'\n';   
    }
    return 0;
}