    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int t;
        cin >> t;
        int sum=0;
        while (t--)
        {
            int x;
            cin>>x;
            sum+=(x-1);

        }
        cout<<sum<<'\n';
        return 0;
    }