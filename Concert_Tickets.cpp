#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t,c;
    cin>>t>>c;
    multiset<int>ms;
    while(t--){
        int x;
        cin>>x;
        ms.insert(x);
    }
   

    while(c--)
    {
        int x;
        cin>>x;
         auto it=ms.lower_bound(x);
         auto it1=ms.upper_bound(x);
         if((it==it1)&&(it==ms.begin())) cout<<-1;
         else 
         {    if(it==it1)
              it--;
            
             cout<<*it;
             ms.erase(it);
         }
       
         cout<<'\n';
    }


    return 0;
}