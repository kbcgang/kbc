///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int a[100005],b[100005],c[100005];
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
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    int x=0,y=0,z=0;
    while(x<n&&y<n&&z<n)
    {
        while(a[x]>=b[y]&&y<n)y++;
        if(y==n)break;
        while(b[y]>=c[z]&&z<n)z++;
        if(z==n)break;
        x++;
        y++;
        z++;
    }cout<<x;
}