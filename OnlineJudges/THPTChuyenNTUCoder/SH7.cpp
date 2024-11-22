///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long n;
long long f[250]={0,1};
long long ans;
bool check(long long n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int i=2;
    while(f[i-1]+f[i-2]<=n){
        f[i]=f[i-1]+f[i-2];
        i++;
    }
    while(check(f[i])==0)
    {
        i--;
    }
    cout<<f[i];
}
