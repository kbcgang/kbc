/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int a[1000003];
int n;
long long dem[1000005];
long long ans;

void pt(int n)      ///đếm các tích thừa số nguyên tố
{
    int tich=1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        {
            tich*=i;
            while(n%i==0)
                n/=i;
        }
    if(n>1)
        tich*=n;
    dem[tich]++;
}
kien()
{
    if (fopen("SOMAYMAN.inp", "r"))
    {
        freopen("SOMAYMAN.inp", "r", stdin);
        freopen("SOMAYMAN.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pt(a[i]);
    }
    for(int i=2;i<=1e6;i++)
        ans+=(dem[i]*(dem[i]-1))/2; ///đếm các số có chung tích thừa số nguyên tố
    cout<<ans;
}