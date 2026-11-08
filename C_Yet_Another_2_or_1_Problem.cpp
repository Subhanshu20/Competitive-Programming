    #include <bits/stdc++.h>
    using namespace std;

    bool is_palindrome(string &s,int l,int h)
    {

        while(l<h)
        {
            if(s[l]!=s[h]) return false;
            l++;
            h--;
        }
        return true;
    }
    bool is_uniform(string &s,int l,int h)
    {

            while(l<h){
            if(s[l]!=s[l+1]) return false;
            l++;
            }
        return true;
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
            int n,k;
            string s;
            cin>>n>>k>>s;
            int l=0,h=n-1;
            bool eq=false;
           
            bool n_half=true,flag=false;
            for(int i=1;i<=k;i++)
            {  
                if(n_half)
                {
               flag=is_palindrome(s,l,h);

                }
                if(flag)
                { 
                     eq=is_uniform(s,l,h);

                if(eq==true)
            {   for(int i=0;i<=h;i++)
            {
                cout<<s[i];
            }
                for(int j=i;j<=k;j++)
                {
                    cout<<s[0];
                }
               
                break;
            }

                    if(h+1>=n)
                    s.push_back(s[h]);
                    else s[h+1]=s[h];
                    h++;
                    n_half=false;
                    flag=false;
                   

                }
                else
                {
                    h=(h+1)/2-1;
                    n_half=true;
                }
                
                
            }
            
            if(!eq)
            for(int i=0;i<=h;i++)
            {
                cout<<s[i];
            }
            
                cout<<'\n';
        

        }
        return 0;
    }