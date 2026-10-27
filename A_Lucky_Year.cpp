#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t,num,roundf=1;
    cin >> t;
    num=t;
    if(t<10) cout<<1;
    else{
        while(num>=10)
        {
            roundf*=10;
            num/=10;

        }
        num=t%roundf;
        cout<<roundf-num;
    }

   
    return 0;
}