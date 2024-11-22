///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int t,l,r;
bool snt[3000005];
void make_sieve()
{
    snt[0]=snt[1];
    for(int i=2;i*i<=3*1e6;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=3*1e6;j+=i)
                snt[j]=1;
}
bool tcs(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s%5==0;
}
int ans[3000005];
void insanesieve()
{
    for(int i=5;i<=3*1e6;i++)
    {
        ans[i]=ans[i-1];
        if(snt[i]==0)
            ans[i]+=tcs(i);
    }
}
kien()
{
    if(fopen("Cau5b.inp","r"))
    {
        freopen("Cau5b.inp","r",stdin);
        freopen("Cau5b.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    insanesieve();
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<"\n";
    }
}