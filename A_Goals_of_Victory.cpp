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
        long long s=0;
        int x;

        while(--n)
        {
           cin>>x;
           s+=x;
        }
        cout<<-1*s<<'\n';
    }
    return 0;
}