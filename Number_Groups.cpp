#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   long long int k;
   cin>>k;
   long long int prev_pos=k*(k-1)/2;
   long long int st_num=prev_pos*2+1;
   long long int sum=0;
   for(int i=1;i<=k;i++)
   {
     sum+=st_num;
     st_num+=2;
   }
   cout<<sum<<'\n';
    return 0;
}