#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   int a,b;
   cin>>a>>b;
   int r=b-a;
   for(int i=r;i>=1;i--)
   {
      int mod=a%i;
   
      int st=(mod==0)?0:a-mod+i;
      if((st<=b)&&(st+i<=b))
      {
      cout<<i<<'\n';
      break;
      }
   }
    return 0;
}`