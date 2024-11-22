/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, a[1000005], ans;
bool snt[2000005];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i * i <= 2 * 1e6; i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 2 * 1e6; j += i)
                snt[j] = 1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    make_sieve();
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(snt[a[i]]==0)
            ans++;
    }
    sort(a,a+n);
    a[n]=10000005;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]>1&&a[i]+1>0)
        {
            cout<<ans<<"\n"<<a[i]+1;
            exit(0);
        }
    }
    cout<<ans<<"\n"<<1;
}