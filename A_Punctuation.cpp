#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
        set<char>st={'.',',','!','?'};
        string s;
        getline(cin,s);
        
        string res;
        int space=false;
        int pmark=false;
        for(auto it:s)
        {  auto itr=st.find(it);
          //punctuation
          if(itr!=st.end())
          { if(space) space=false;
            pmark=true;
            res.push_back(*itr);
          
          } 
          //word
          else if(itr==st.end()&&it!=' '){
            if(space||pmark) {res.push_back(' ');
                if(space)  space=false;
            if(pmark) pmark=false;
            }
            res.push_back(it);
          } // space
          else if(it==' ')
          {
            space=true;

          }
        }
        cout<<res;

    
    return 0;
}