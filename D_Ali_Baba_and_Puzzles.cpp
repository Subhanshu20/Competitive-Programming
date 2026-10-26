#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
  long long int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a+b-c==d) cout<<"YES";
  else if(a+b*c==d) cout<<"YES";
  else if(a-b+c==d) cout<<"YES";
  else if(a-b*c==d) cout<<"YES";
  else if(a*b+c==d) cout<<"YES";
  else if(a*b-c==d) cout<<"YES";
  else cout<<"NO";
    return 0;
}