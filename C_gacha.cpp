#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    set<string>st;
    while (t--)
    {
        string x;
        cin>>x;
        st.insert(x);
    }
    cout<<st.size();
    return 0;
}