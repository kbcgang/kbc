///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long a[5]={0,2,4,6,8};
long long b[5]={1,3,5,7,9};
long long r,c;
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
    cin>>r>>c;
    if(r%2==0)
        cout<<1ll*((r-1)/2)*10+b[c-1];
    else
        cout<<1ll*(r/2)*10+a[c-1];
}