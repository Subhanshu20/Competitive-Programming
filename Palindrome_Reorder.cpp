#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
        string s;
        cin>>s;
        map<char,int>mpp;
        for(auto it:s)
        {
            mpp[it]++;
        }
        int odd=0;
        for(auto it:mpp)
        {
            if(it.second%2!=0)
            odd++;
        }
        if((s.size()%2==0&&odd>=1)||(s.size()%2!=0&&odd>1)) cout<<"NO SOLUTION";
        else{
             vector<char>v(s.size());
             int i=0;int j=s.size()-1;
             for(auto &it:mpp)
          {
             if(it.second%2!=0)
             {
                v[s.size()/2]=it.first;
                it.second--;
             }

             while(it.second)
             {   
                v[i]=it.first;
                v[j]=it.first;
                i++;
                j--;
                it.second-=2;
             }
          }



          for(auto it:v)
          {
            cout<<it;
          }
        }
    
    return 0;
}