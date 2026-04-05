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
        int n;
        cin>>n;
        int x=1;
        int y=3*n;
        for(int i=0;i<3*n;i++)
        {
            if(i%3==0){
                cout<<x++<<" ";
            }
            else{
                cout<<y--<<" ";
            }
        }
        cout<<'\n';
        

    }
    return 0;
}