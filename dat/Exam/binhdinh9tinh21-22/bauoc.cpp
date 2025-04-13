///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<climits>
#include<array>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
bool snt[10000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
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
    make_sieve();
    int d=0;
    for(int i=2;i<=sqrt(n);i++)
        d+=(snt[i]==0);
    cout<<d;
}