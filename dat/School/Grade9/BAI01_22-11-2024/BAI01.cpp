///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
// #include"windows.h"
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int a,b,ans;
int tcs[1000005];
int sumletter(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
void make_sumletter(int b)
{
    for(int i=1;i<=1000000;i++)
    {
        tcs[i]=sumletter(i);
    }
}
void ptich(int n)
{
    int m=n;
    int s=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            s+=tcs[i];
            n/=i;
        }
    }
    if(n>1)
        s+=tcs[n];
    if(tcs[m]==s)
        ans++;
}
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
    make_sumletter(b);
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        ptich(i);
    }
    // ptich(a);
    cout<<ans;
}