#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int a,b;
bool snt[100000005];
void make_sieve()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
}
main()
{
    if(fopen("CAU02.INP","r"))
    {
        freopen("CAU02.INP","r",stdin);
        freopen("CAU02.OUT","w",stdout);
    }
    make_sieve();
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<=b;i++)
        if(snt[i]==0)
            ans++;
    cout<<ans;
}
