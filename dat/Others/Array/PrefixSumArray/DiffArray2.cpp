/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, q;
int a[100005], ans[100005];
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> ans[i];
    }
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        a[l] += x;
        a[r + 1] -= x;
    }
    int m=0;
    for(int i=1;i<=n;i++)
    {
        m+=a[i];
        cout<<ans[i]+m<<" ";
    }
}