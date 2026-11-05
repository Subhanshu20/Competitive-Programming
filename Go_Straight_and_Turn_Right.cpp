#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   char ch[4]={'E','S','W','N'};
   int turn=0;
   int n;
   cin>>n;
   string s;
   cin>>s;
   int x=0,y=0;
   char dirr='E';
   for(int i=0;i<n;i++)
   {
     
      if(s[i]=='R'){ turn++;
         dirr=ch[turn%4];
      }
      else{
        if(dirr=='E') x++;
        else if(dirr=='S') y--;
        else if(dirr=='W') x--;
        else  y++;

      }
   }
   cout<<x<<" "<<y<<'\n';
    return 0;
}