/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int a[100005], x;
int ans = INT_MAX;
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
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int p = lower_bound(a, a + n, -x) - a;
        if (p != n)
            ans = min(ans, abs(a[p] + x));
        if (p > 0)
            ans = min(ans, abs(a[p - 1] + x));
    }
    cout << ans;
}