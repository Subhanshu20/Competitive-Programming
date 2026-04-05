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
    {   int temp=2;
       
        int n;
        cin>>n;
       
        for(int i=0;i<n;i++)
        {
            if(i==0||i==n-1)
            {
                cout<<temp<<" ";
                
            }
            else{
                int mul=temp+1;
                if(mul%2==0) mul++;
                cout<<temp*mul<<" ";
                 temp=mul;
                 
            }
            
        }
        cout<<'\n';

    }
    return 0;
}       