///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int a,b,t,ans=1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    t=a%10;
    while(b>0)
    {
        if(b%2==1)
        {
            ans=(ans*t)%10;
        }
        t=(t%10*t%10)%10;
        b/=2;

    }
    cout<<ans%10;
}
