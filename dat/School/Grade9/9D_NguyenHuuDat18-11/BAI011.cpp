///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
bool snt[2000005];
int n,a[10005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i*i<=2*1e6;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=2*1e6;j+=i)
                snt[j]=1;
}
bool stair(int n)
{
    if(n<10||snt[n]==1)
        return 0;
    while(n>0)
    {
        int dv=n%10;
        int hc=(n%100)/10;
        if(hc>=dv)
            return 0;
        n/=10;
    }
    return 1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    make_sieve();
    int ans=0;
    while(n--)
    {
        cin>>a[n];
        ans+=stair(a[n]);
    }
    cout<<ans;
}