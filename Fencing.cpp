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
        int n,m,k;
        cin>>n>>m>>k;
        set<pair<int,int>>st;
       int res=0;
       vector<pair<int,int>>vp;
        for(int i=0;i<k;i++)
        {
            int x,y;
            cin>>x>>y;
            x--;
            y--;
            vp.push_back({x,y});
            st.insert({x,y});
            
          
        }
         
        for(auto it:vp)
        {
            int i=it.first;
            int j=it.second;
           
            //top
            if(i==0||(st.find({i-1,j})==st.end())) res++;

            //left
            if(j==0||(st.find({i,j-1})==st.end())) res++;

            //right
            if(j==m-1||(st.find({i,j+1})==st.end())) res++;

            //bottom
            if(i==n-1||(st.find({i+1,j})==st.end())) res++;
        }
        cout<<res<<'\n';

        




        
    }
    return 0;
}