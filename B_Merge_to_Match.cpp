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
            int n,m;
            cin>>n>>m;
            vector<int>a(n,0);
            vector<int>b(m,0);
            for(auto &it:a)
            cin>>it;
            for(auto &it:b)
            cin>>it;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int i=0,j=1,k=0;
            bool flag = true;
            if(m>n) flag=false;
            else
            {
                while(i<n&&j<n&&k<m)
                {
                if(a[i]<b[k]&&a[j]>b[k])
                {
                    i=j+1;
                    j=j+2;
                    k++;
                }
                else{
                    if(a[i]>b[k])
                    {
                        flag=false;
                        break;

                    }
                    while(j<n)
                    {   if(a[j]>b[k])
                        {   
                            break;
                        }
                        else
                        j++;
                    }
                    if(j==n)
                    {

                        flag=false;
                        break;

                    }
                }
                }
            }
            if(k<m) flag=false;
            if(flag) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
        return 0;
    }