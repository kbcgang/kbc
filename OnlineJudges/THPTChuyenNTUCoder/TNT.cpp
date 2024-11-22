#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b;
int ans=0;
bool snt[100000007];
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(snt[i]==0)
            ans+=i;
    cout<<ans;
}