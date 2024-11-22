///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,d,p;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>d>>p;
        for(int b=d+sqrt(p);b<=sqrt(p);b++)
        {
            int a=d-b;
            if(a*b==p)
                ans+=2;
            a=d+b;
            if(a*b==p) ans+=2;
        }
        cout<<ans<<"\n";
    }
}
