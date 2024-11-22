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
int tcs(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,ans=0;
    cin>>n;
    check(n);
    for(int i=2;i<=n;i++)
    {
        if(snt[i]==0&&snt[tcs(i)]==0)
            ans++;
    }
    cout<<ans;
}
