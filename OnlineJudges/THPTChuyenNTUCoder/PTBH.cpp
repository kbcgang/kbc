///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a,b,c,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>c;
    if(a==0&&b!=0)
    {
        if(1.0*-c/b!=0) cout<<3;
        else cout<<0;
    }
    else if(c==0) cout<<0;
    else if(b==0)
    {
        ans=a*c;
        if(ans<0) cout<<2;
        else if(ans>0) cout<<-1;
        else cout<<0;
    }
    else
    {
        b*=b;
        int n=-(4*a*c);
        ans=b-n;
        int p=1.0*c/a;
        if(ans<0) cout<<-1;
        else if(p>0) cout<<1;
        else if(ans>0) cout<<2;
        else if(ans==0) cout<<3;
    }
}
