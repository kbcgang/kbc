///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,ans;
long long x;
bool snt[1000005];
void make_sive()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=1e3;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e6;j+=i)
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
    make_sive();
    cin>>n;
    while(n--)
    {
        cin>>x;
        long long a=sqrt(x);
        if(snt[a]==0)
            if(a*a==x)
                ans++;
    }
    cout<<ans;
}   