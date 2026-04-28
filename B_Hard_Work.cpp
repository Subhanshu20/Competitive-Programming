    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        string t1,t2,t3,a,b,c;
        cin>>t1>>t2>>t3;

        //string extracted
        
        for(auto it:t1)
        {
            if(it>=65&&it<=90) a+=(it+32);
            else if(it>=97&&it<=122) a+=it;
        }
        for(auto it:t2)
        {
            if(it>=65&&it<=90) b+=(it+32);
            else if(it>=97&&it<=122) b+=it;
        }
        for(auto it:t3)
        {
            if(it>=65&&it<=90) c+=(it+32);
            else if(it>=97&&it<=122) c+=it;
        }
    
        int n;
        cin>>n;
        while(n--)
        {  bool flag=true;
            string s,ms;
            cin>>s;

            for(auto it:s)
        {
            if(it>=65&&it<=90) ms+=(it+32);
            else if(it>=97&&it<=122) ms+=it;
        }
         
        string s1=a+b+c;
        string s2=a+c+b;
        string s3=b+a+c;
        string s4=b+c+a;
        string s5=c+a+b;
        string s6=c+b+a;
        if(ms==s1||ms==s2||ms==s3||ms==s4||ms==s5||ms==s5||ms==s6) flag=false; 
       
        if(flag) cout<<"WA";
        else cout<<"ACC";
        cout<<'\n';
        }

        return 0;
    }