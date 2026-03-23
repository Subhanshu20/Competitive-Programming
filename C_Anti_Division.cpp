    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
       int a,b,c,d;
       cin>>a>>b>>c>>d;
        
       int fsc,fsd;
       fsc=(c>=a)?((c<=b)?c:0):a+(c-((a%c==0)?c:a%c)); //4
       fsd=(d>=a)?((d<=b)?d:0):a+(d-((a%d==0)?d:a%d)); //6
       int ntc=(fsc!=0?(b-fsc)/c+1:0);  //9-4=5/2=2+1=3
       int ntd=(fsd!=0?(b-fsd)/d+1:0);  //9-6=3/3+1=2
       int cd=lcm(c,d); //6
       int fcd=0;
       if(cd!=0)
       fcd=(cd>=a)?(cd<=b?cd:0):a+(cd-((a%cd==0)?cd:a%cd)); //6
       int nfcd=(fcd!=0?(b-fcd)/cd+1:0); //1
       cout<<((b-a+1)-ntc-ntd+nfcd)<<'\n'; //6-3-3=1+1=2




        return 0;
    }