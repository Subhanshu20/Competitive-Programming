        #include <bits/stdc++.h>
        using namespace std;
        int lb(vector<int>&v,int x)
        {
            int l=0,h=v.size()-1;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if(v[mid]>=x) h=mid-1;
                else l=mid+1;   
        }
            return l;
        }
        int ub(vector<int>&v,int x)
        {
            int l=0,h=v.size()-1;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if(v[mid]<=x) l=mid+1;
                else h=mid-1;
            }
            return h;
        }
        int main()
        {
            ios_base::sync_with_stdio(false);
            cin.tie(nullptr);
            cout.tie(nullptr);
        

            int n;
            cin>>n;
            vector<int>v(n);
        
            for(auto &it:v) {
                cin>>it;
            }
            sort(v.begin(),v.end());
            int k;
            cin>>k;
            while(k--)
            {
                int l,r;
                cin>>l>>r;
                int st=lb(v,l);
                int en=ub(v,r);
                if(st==n) cout<<0<<" ";
                else
                cout<<en-st+1<<" ";
            }
            cout<<'\n';

            return 0;
        }