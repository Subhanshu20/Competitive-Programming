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
            int n,k;
            cin>>n>>k;
            map<int,int>lvalue,index;
            set<int>s;
            int res=0;
            int f=0;
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                if(lvalue.find(x)!=lvalue.end())
                index.erase(lvalue[x]);
                index[i]=x;
                lvalue[x]=i;
                
                s.insert(x);
                if(s.size()==k)
                {
                    auto it=index.begin();
                    s.erase(it->second);
                    lvalue.erase(it->second);
                    f=it->first+1;
                    index.erase(it->first);
                }

                res=max(res,i-f+1);

            } 
                 cout<<res<<'\n';
        
        }
        return 0;
    }