///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
int ans=0;
bool snt[5000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(5*1e6);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=5*1e6;j+=i)
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
    cin>>s;
    int t=0;
    make_sieve();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            t=t*10+s[i]-48;
        else
        {
            if(snt[t]==0)
            {
                ans=max(ans,t);
            }
            t=0;
        }
    }
    if(snt[t]==0)
        ans=max(ans,t);
    cout<<ans;
}