///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
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
    int ans=n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ans-=ans/i;
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1) ans-=ans/n;
    cout<<ans;
}