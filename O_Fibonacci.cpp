#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int fib1=0,fib2=1,n,res;
    cin>>n;
    if(n==1) cout<<fib1;
    else if(n==2) cout<<fib2;
    else{
        for(int i=3;i<=n;i++)
        {
            res=fib1+fib2;
            fib1=fib2;
            fib2=res;
        }
        cout<<res;
    }
    


    return 0;
}