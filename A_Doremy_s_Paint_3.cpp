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
            int n;
            cin>>n;
            map<int,int>mpp;
            int x;
            

            for(int i=0;i<n;i++)
            {
            
                cin>>x;
                mpp[x]++;
            
            }
        
            if(mpp.size()==1||mpp.size()==2){
                auto it1=mpp.begin();
                auto it2=++mpp.begin();
                if((mpp.size()==1)||(n%2==0&&(n-(it1->second)==it1->second))||(n%2!=0&&abs(it1->second-it2->second)==1))
                cout<<"Yes";
                else cout<<"No";
            }
        else cout<<"No";
            cout<<'\n';
        }
        return 0;
    }