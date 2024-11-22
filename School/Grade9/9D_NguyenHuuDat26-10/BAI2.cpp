///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long a,b;
int ans;
bool check(long long n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI2.inp", "r"))
    {
        freopen("BAI2.inp", "r", stdin);
        freopen("BAI2.out", "w", stdout);
    }
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b%a==0)
            ans+=check(-b/a);
    }
    cout<<ans;
}