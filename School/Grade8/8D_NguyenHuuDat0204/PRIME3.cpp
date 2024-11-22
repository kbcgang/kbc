#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,ans;
bool snt[10000005];
void make_sieve()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i<=sqrt(1e6);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=1;
}

int dao(int n)
{
    int s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
main()
{
    freopen("PRIME3.INP","r",stdin);
    freopen("PRIME3.OUT","w",stdout);
    make_sieve();
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(snt[i]==0&&snt[dao(i)]==0)
            ans++;
    cout<<ans;
}
