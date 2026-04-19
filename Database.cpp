#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n,r;
        cin>>n>>r;
        vector<set<int>>v(n+1);
        bool flag=false;
        while(r--)
        {
            int id,sub;
            cin>>id>>sub;
            if((!v[id].empty())&&(v[id].find(sub)!=v[id].end()))
            {
                flag=true;
            }
            else v[id].insert(sub);

        }
        cout<<"Scenario #"<<i<<": "; 
        if(flag) cout<<"impossible";
        else cout<<"possible";
        cout<<'\n';

    }
    return 0;
}