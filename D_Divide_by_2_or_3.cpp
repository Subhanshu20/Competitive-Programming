#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
        int n;
        cin>>n;
        vector<int>v(n);
        int gcd=0;
        for(auto &x:v){
            cin>>x;
            gcd=__gcd(gcd,x);
        } 
        int res=0;
        for(auto &x:v){
            int temp=x/gcd;
            while(temp%2==0)
            {
                temp/=2;
                res++;
            }
            while(temp%3==0)
            {
                temp=temp/3;
                res++;
            }
            if(temp!=1) {
                cout<<-1<<endl;
                return 0;
            }
        } 
        cout<<res<<endl;

         
    
    return 0;
}