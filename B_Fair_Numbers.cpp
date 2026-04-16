#include <bits/stdc++.h>
using namespace std;
#define int long long
bool fair(int n)
{
    int x=n;
    while(x)
    {
        int r=x%10;
        if(r!=0&&n%r!=0) return false;
        x=x/10;
    }
    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        int n;
        cin>>n;
        while(!fair(n))
        {
            n++;
        }
        cout<<n<<'\n';
    }
    
    return 0;
}
