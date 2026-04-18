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
        
        map<int,int>mpp;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mpp[x]++;
        }
       
         int ele=-1;
         int res=-1;
         int ele1,ele2;
        for(auto it:mpp)
        {
           if((ele==-1&&it.second>=k)||(ele!=-1&&(mpp.find(it.first-1)==mpp.end()))){
            ele=it.first;
           }
            if(it.second>=k){
              
              if(it.first-ele>res)
              {
                res=it.first-ele;
                ele1=ele;
                ele2=it.first;

              }
           } 
           else ele=-1;
        }
         
        if(res!=-1)cout<<ele1<<" "<<ele2<<'\n';
        else cout<<-1<<'\n';
        



        
    }
    return 0;
}   