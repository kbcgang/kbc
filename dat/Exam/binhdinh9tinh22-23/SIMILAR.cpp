///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int tcs[10000005],l,r;
int sum(int x)
{
    int s=0;
    while(x>0)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
int ans;
void ChatGPT()
{
    for(int i=l;i<=r;i++)
    {
        int x=sum(i);
        if(tcs[x]==0)
            tcs[x]=i;
        else ans=max(ans,i-tcs[x]);
    }
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
    cin>>l>>r;
    ChatGPT();
    cout<<ans;
}