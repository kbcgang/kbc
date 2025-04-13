///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a[1000005];
int t,n;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    for(ll i=1;i<=1e6;i++)
        a[i]=a[i-1]+i*(i+2);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<'\n';
    }
}