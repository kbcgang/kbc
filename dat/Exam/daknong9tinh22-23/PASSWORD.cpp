///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int l,r;
int tcs(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
bool snt[10000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(r);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=r;j+=i)
                snt[j]=1;
}
int ans;
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
    cin>>l>>r;
    make_sieve();
    for(int i=l;i<=r;i++)
    {
        if(snt[i]==0)
            if(snt[tcs(i)]==0)
                cout<<i<<" ";
    }

}