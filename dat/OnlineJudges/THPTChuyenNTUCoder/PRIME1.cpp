#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[10000005];
void check(int n)
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(n);i++)
        if(snt[i]==0)
        for(int j=i*i;j<=n;j+=i)
            snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,ans=0;
    cin>>a>>b;
    check(b);
    for(int i=a;i<=b;i++)
        if(snt[i]==0)
            ans++;
    cout<<ans;
}
