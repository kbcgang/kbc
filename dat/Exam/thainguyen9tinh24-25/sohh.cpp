///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll uoc[1000005];
void make_div()
{
    for(int i=1;i<=1e6;i++)
        for(int j=i*2;j<=1e6;j+=i)
            uoc[j]+=i;
    for(int i=1;i<=1e6;i++)
        uoc[i]=abs(uoc[i]-i);
}
int a,b;
ll ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;
    make_div();
    for(int i=a;i<=b;i++)
        ans+=uoc[i];
    cout<<ans;
}