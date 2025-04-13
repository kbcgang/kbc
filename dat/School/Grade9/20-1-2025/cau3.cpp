///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int snt[10000005];
void make_sieve()
{
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]^1)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
    for(int i=2;i<=1e7;i++)
    {
        if(snt[i]|0)snt[i]=snt[i-1]+1;
        else snt[i]=snt[i-1];
    }
}
int q,l,r;
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
    cin>>q;
    make_sieve();
    while(q--){
        cin>>l>>r;
        cout<<snt[r]-snt[l-1]<<"\n";
    }
}