///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<cmath>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
int t(ll n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    while(n++)
    {
        if(__gcd(n,1ll*t(n))>1)
        {
            cout<<n;
            exit(0);
        }
    }
}