#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[1000005];
void make_sieve()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i*i<=1e6;i++)
        for(int j=i*i;j<=1e6;j+=i)
            snt[j]=1;
}
int l,r,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("PRIME.inp","r")){
        freopen("PRIME.inp","r",stdin);
        freopen("PRIME.out","w",stdout);
    }
    make_sieve();
    cin>>l>>r;
    for(int i=l;i<=r;i++)
        if(snt[i]==0)
        {
            int res=0,n=i;
            while(n>0){
                res+=n%10;
                n/=10;
            }
            if(snt[res]==0)
                ans++;
        }
    cout<<ans;
}
