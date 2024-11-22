/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n, a[505];
int dem[1000005];
void sub1()
{
    for(int x=0;x<n;x++)
    {
        long ans=0;
        for(int k=2;k<x;k++)
            for(int j=1;j<k;j++)
                for(int i=0;i<j;i++)
                    if(a[k]+a[j]+a[i]==a[x])
                        ans++;
        cout<<ans<<" ";
    }
}
main()
{
     if(fopen("CISET.inp","r"))
    {
        freopen("CISET.inp","r",stdin);
        freopen("CISET.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n <= 100)
        sub1();
}