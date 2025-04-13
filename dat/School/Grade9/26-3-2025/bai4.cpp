///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int a[100005];
ll s;
ll durian(int x)
{
    ll t=0;
    for(int i=0;i<n;i++)
        if(a[i]>x)
            t+=a[i]-x;
    return t;
}
void ChatGPT()
{
    int l=0,r=1e9;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(durian(m)<s)
            r=m-1;
        else l=m+1;
    }
    cout<<l-1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>s;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ChatGPT();
}