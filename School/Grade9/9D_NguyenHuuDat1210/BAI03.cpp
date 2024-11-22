///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
bool snt[10000000+5];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
}
bool check(long n)
{
    if(n<=10)
        return 0;
    while(n>10)
    {
        int dv=n%10;
        int chuc=n%100/10;
        if(chuc>=dv) return 0;
        n/=10;
    }
    return 1;
}
int n;
long a,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("BAI03.inp","r"))
    {
        freopen("BAI03.inp","r",stdin);
        freopen("BAI03.out","w",stdout);
    }
    make_sieve();
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(check(a)&&snt[a]==0)
            ans=max(ans,a);
    }
    cout<<ans;
}