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
        int res=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mpp[x]++;
        }
        
        while(mpp.size()!=0)
        {
            int num;
           
             int freq=INT_MAX;

             
             for(auto &it:mpp)
             {  
                num=it.first;
                 freq=min(freq,it.second);
               if((mpp.find(num+1)==mpp.end()))
                {
                    break;
                }
                
             }
            
             for(auto it=mpp.begin();it!=mpp.end();)
             {
                
                int x=it->first;
                it->second-=freq;
                if(it->second==0){ 
                    it=mpp.erase(it);
                    
                }
                 else it++;
                 if(x==num)
                {   
                     break;
                }
                
             }
            
                
             res+=freq;



        }
        cout<<res<<'\n';
    }
    return 0;
}