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
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        
        bool flag=false;
         int cnt;

            for(int i=0;i<n;i++)
            {     cnt=0;
                 if(s2[0]==s1[i])
                 {  int idx1=i+1;
                    int idx2=1;
                    int range=n;
                    while(idx2!=m&&s1[idx1%n]==s2[idx2])
                    {  
                         if(idx1%range==0){
                         cnt++;
                         range=range*2;
                        }

                        
                        idx1++;
                       
                        idx2++;

                    }
                    if(idx2==m){ flag=true;
                        break;
                    }
                 }
            }
            if(flag) cout<<cnt;
           else cout<<-1;
            cout<<'\n';


    }
    return 0;
}