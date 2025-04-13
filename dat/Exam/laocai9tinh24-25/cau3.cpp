///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
bool snt[10000005];
int uoc[1000005];
int l,r,k;
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
}
int s[10000005];
void make_9()
{
    for(int i=1;i<=1e7;i++)
        s[i]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(s[i]==1)
            for(int j=i;j<=1e7;j+=i)
                s[j]*=i;
}
void demuoc()
{
    for(int i=1;i<=1e6;i++)
        for(int j=i;j<=1e6;j+=i)
            uoc[j]++;
}
int d=0;
void sub1()
{
    make_sieve();
    for(;l<=r;l++)
        if(snt[l]==0)
            d++;
    cout<<d;
}
void sub2()
{
    make_9();
    
}
void sub4()
{demuoc();
    for(;l<=r;l++)
        if(uoc[l]==k)
            d++;
    cout<<d;
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
    cin>>l>>r>>k;
    if(k==2)sub1();
    else sub2();
}