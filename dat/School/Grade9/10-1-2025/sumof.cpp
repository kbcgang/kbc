///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;ll ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);cin>>n;
    for(int i=1;i<=sqrt(n/3);i++)
        for(int j=i;j*j+i*i<=(n/3)*2;j++)
        {
            int m=n-i*i-j*j;
            int k=sqrt(m);
            if(k*k<j*j)break;
            if(k*k==m)
                ans++;
        }cout<<ans;
}