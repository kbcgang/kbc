///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long m,n;
long long get_divisors(long long n)
{
    long long s=0;
    for(long long i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
            s+=i;
            if(i*i!=n)
                s+=n/i;
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    m=get_divisors(m);
    n=get_divisors(n);
    if(n==m&&n!=0)
        cout<<"YES";
    else cout<<"NO";
}