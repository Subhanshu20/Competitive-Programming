#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   int n,a,b,c,d;
   cin>>n>>a>>b>>c>>d;
   if(abs(b-c)>=2||(b==0&&c==0&&a!=0&&d!=0)) cout<<"No";
   else cout<<"Yes";


    return 0;
}