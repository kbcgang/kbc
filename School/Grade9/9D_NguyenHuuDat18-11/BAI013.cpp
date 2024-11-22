///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int a,b;
bool palind(int n)
{
    int s=10;
    int m=0;
    while(m<=n)
    {
        if(m==n)
        {
            return 1;
        }
        m=m*10+n%10;
        n/=10;
    }
    return 0;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<=b;i++)
        ans+=palind(i);
    cout<<ans;
}