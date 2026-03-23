#include <bits/stdc++.h>
using namespace std;
 int gcd(int a,int b)
 {
    if(a==0) return b;
    return gcd(b%a,a);
 }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   int a,b,k;
   cin>>a>>b>>k;
   int num=gcd(a,b);
    
   for(int i=num;i>=1;i--)
   {
     if((a%i==0)&&(b%i==0))
     {  
        --k;
     }
     if(k==0){
        num=i;
        break;
     } 
   }
   cout<<num<<'\n';
    return 0;
}