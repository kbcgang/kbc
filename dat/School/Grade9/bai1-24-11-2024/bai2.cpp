///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long ans;
bool snt[1000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(n);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=n;j+=i)
                snt[j]=1;
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
    cin>>n;
    make_sieve();
    for(int i=2;i<=n;i++)
    {
        if(snt[i]==0)
        {
            int m=n;
            while(m>0)
            {
                ans+=1l*m/i;
                m/=i;
            }
        }
    }
    cout<<ans;
}