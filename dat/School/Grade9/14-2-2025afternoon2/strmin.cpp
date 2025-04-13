///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int x,y,z,n;
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
    cin>>n>>x>>y>>z;
    z=n-x-y;
    n=0;
    while(z--)
    {
        cout<<n;
        n=(n+1)%2;
    }
    n=0;
    while(x--)
    {
        cout<<char(n+65);
        n=(n+1)%2;
    }
    n=0;
    while(y--)
    {
        cout<<char(n+97);
        n=(n+1)%2;
    }
}