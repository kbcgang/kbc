///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long t[1000005];
void make_divisor()
{
    // for(int i=1;i<=1e6;i++)
    //     t[i]=1;
    for(long long i=1;i<=1e6;i++)
        for(long long j=i;j<=1e6;j+=i)
            t[j]+=i;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_divisor();
    int n;
    cin>>n;
        int a;
    while(n--)
    {
        cin>>a;
        if(t[a]>=2*a) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}
