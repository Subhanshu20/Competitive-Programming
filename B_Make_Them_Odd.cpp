    #include <bits/stdc++.h>
    using namespace std;
    int operation(int n,set<int>&s)
    {
        int cnt=0;
        while(n%2==0)
        {   
        if(s.find(n)!=s.end()) break;
        cnt++;
        n=n/2;
            
        

        }
        return cnt;
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
            int n;
            cin>>n;

        set<int>s; 
        int res=0; 
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            
        }
        sort(v.begin(),v.end());

        for(auto it:v)
        {
            res+=(operation(it,s));

            s.insert(it);
        }

        
        cout<<res<<'\n';

        }
    
        return 0;
    }