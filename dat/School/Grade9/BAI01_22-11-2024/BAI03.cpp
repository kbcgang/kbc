///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int t,l,r;
int ans[3000005];
bool snt[3000005];
bool mod5(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s%5==0;
}
void make_sieve()
{
    snt[0]=snt[1];
    for(int i=2;i<=sqrt(3*1e6);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=3*1e6;j+=i)
                snt[j]=1;
    for(int i=0;i<=3*1e6;i++)
    {
        ans[i]=ans[i-1];
        if(snt[i]==0)
            ans[i]+=mod5(i);
    }
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
    cin>>t;
    make_sieve();
    while(t--)
    {
        cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<"\n";
    }
}