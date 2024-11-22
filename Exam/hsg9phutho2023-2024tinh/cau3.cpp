///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,x,ans;
bool snt[1000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e6);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=1;
}
bool cut(int n)
{
    int m=n;
    while(n>0)
    {
        if(snt[n]) return 0;
        n/=10;
    }
    m*=10;
    for(int i=1;i<=9;i++)
    {
        if(snt[m+i]==0) return 1;
    }
    return 0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans+=cut(x);
    }
    cout<<ans;
}
