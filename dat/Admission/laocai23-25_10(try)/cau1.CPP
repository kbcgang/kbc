///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int a,b;
#define ErasLimit 10000005
bool snt[ErasLimit];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(ErasLimit);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=ErasLimit;j+=i)
                snt[j]=1;
}
int dx(int n)
{
    int s=0;
    while(n>0)
    {
        s=s*10+n%10;
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
    cin>>a>>b;
    int d=0;
    make_sieve();
    for(int i=a;i<=b;i++)
        if(snt[i]==0&&i==dx(i))
            d++;
    cout<<d;
}