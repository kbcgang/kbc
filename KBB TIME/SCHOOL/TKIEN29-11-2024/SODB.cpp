///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
bool snt[10000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
}
int n,a[2000005];
bool check(int n)
{
    int odd=0,even=0;
    while(n>0)
    {
        int m=(n%10)%2;
        if(m==1) odd++;
        else even++;
        n/=10;
    }
    return odd!=even;
}
int ans;
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
    cin>>n;
    make_sieve();
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(snt[a[i]]==0)
            ans+=check(a[i]);
    }
    cout<<ans;
}