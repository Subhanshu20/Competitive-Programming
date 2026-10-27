#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    int ev=0,od=0,pos=0,neg=0;
    while (t--)
    { 
       int x;
       cin>>x;
       if(x%2==0) ev++;
       else od++;
       if(x>0) pos++;
       else if(x<0) neg++;
      

    }
     cout<<"Even: "<<ev<<'\n'<<"Odd: "<<od<<'\n'<<"Positive: "<<pos<<'\n'<<"Negative: "<<neg;
    return 0;
}