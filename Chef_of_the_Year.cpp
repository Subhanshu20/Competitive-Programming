    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    
        int n,m;
        cin>>n>>m;
        map<string,string>mpp;
        while(n--)
        {
            string name,country;
            cin>>name>>country;
            mpp[name]=country;
        }
        map<string,int>name,country;
        pair<string,int>pwinner={"",0},cwinner={"",0};
        while(m--)
        {
            string s;
            cin>>s;
            country[mpp[s]]++;
            name[s]++;
            if(name[s]>=pwinner.second)
            {
               
                if(pwinner.first=="") pwinner.first=s;
                else pwinner.first=(name[s]>pwinner.second)?s:min(pwinner.first,s);
                 pwinner.second=name[s];
            }

            if(country[mpp[s]]>=cwinner.second)
            {   
              
                if(cwinner.first=="") cwinner.first=mpp[s];
                else cwinner.first=(country[mpp[s]]>cwinner.second)?mpp[s]:min(cwinner.first,mpp[s]);
                  cwinner.second=country[mpp[s]]; 
               
            }


        }

        cout<<cwinner.first<<'\n'<<pwinner.first;

        return 0;
    }