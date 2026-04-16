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
        
        int res=1;
        
        for(int fact=2;fact*fact<=n;fact++)
        {
            if(n%fact==0)
            {
                res=n/fact;
                break;
            }
        }

        cout<<res<<" "<<n-res<<'\n';
    }
    return 0;
}