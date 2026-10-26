#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int wl,wb;
    cin>>wl>>wb;
    int cnt=0;
    while(wl<=wb)
    {
        wl*=3;
        wb*=2;
        cnt++;

    }
    cout<<cnt;
    return 0;
}