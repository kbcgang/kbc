/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, a[1000005], b[1000005];
ll ans = inf;
void sub1()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)

            ans = min(ans, abs(a[i] + b[j]));
}
void sub2()
{
    // sort(a, a + n);
    sort(b, b + n);
    for (ll i = 0; i < n; i++)
    {
        ll x = *lower_bound(b, b + n, -a[i]);
        ans = min(ans, abs(a[i] + x));
    }
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
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    if (n <= 9 * 1e3)
        sub1();
    else
        sub2();
    cout<< ans;
}