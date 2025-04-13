///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<array>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b;
int snt[1000005];
void make_sieve()
{
    for(int i=2;i<=1e6;i++)
        snt[i]=1;
    for(int i=2;i<=1e3;i++)
        if(snt[i])
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=0;
    for(int i=2;i<=1e6;i++)
        snt[i]=snt[i-1]+snt[i];
}
/// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
main()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    make_sieve();
    cin>>a>>b;
    b=sqrt(b);
    ll m=sqrt(a);
    if(m*m<a)
        m++;
    cout<<snt[b]-snt[m-1];
}