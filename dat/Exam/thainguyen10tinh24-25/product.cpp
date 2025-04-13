///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<cmath>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a,x,s=1;
ll d;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==0)
            x++;
        else{
            s*=a/abs(a);
            d+=abs(a)-1;
        }
    }
    if(x>0)d+=x;
    else if(s<0) d+=2;
    cout<<d;
}