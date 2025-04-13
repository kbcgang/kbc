///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t,n,x,k,ans;
int num[10][1005];
void ChatGPT()
{
    num[0][0]=1;
    for(int i=1;i<=1000;i++)
    {
        int m=i;
        while(m>0)
        {
            num[m%10][i]++;
            m/=10;
        }
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
    cin>>t;
    ChatGPT();
    while(t--)
    {
        cin>>n>>k;
        while(n--)
        {
            cin>>x;
            ans+=num[k][x];
        }
        cout<<ans<<'\n';
        ans=0;
    }
}