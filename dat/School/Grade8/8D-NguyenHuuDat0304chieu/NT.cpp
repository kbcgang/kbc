#include<bits/stdc++.h>
#define int long long 
using namespace std;
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
int a,b,ans;
main()
{
    if(fopen("NT.inp","r")){
        freopen("NT.inp","r",stdin);
        freopen("NT.out","w",stdout);
    }
    make_sieve();
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(snt[i]==0)
            ans++;
    cout<<ans;
}