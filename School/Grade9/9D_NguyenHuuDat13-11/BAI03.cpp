///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
int tcs(long long n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int check(int s)
{
    int m=sqrt(s);
    if(m*m==s)
        return s;
    else return s%11;
}
kien()
{
    if(fopen("BAI03.inp","r"))
    {
        freopen("BAI03.inp","r",stdin);
        freopen("BAI03.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cout<<check(tcs(n));
}