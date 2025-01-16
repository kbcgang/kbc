/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, tong;
kien maxx, minn, vtr, ans, l, r;
map<int, int> pp;

int operator%(string s, int k)
{
    int r = 0;
    for (auto x : s)
    {
        r = r * 10 + (x - '0');
        r %= k;
    }
    return r;
}

kien du(kien a, kien m, kien k)
{
    if (m == 1)
    {
        return (a % k);
    }
    kien r = du(a, m / 2, k);
    r = (r * r) % k;
    if (m % 2 == 1)
    {
        r = (r * a) % k;
    }
    return r;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    pp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        kien a = s % k;
        a = du(a, m, k);
        tong += a;
        ans += pp[tong % k];
        pp[tong % k]++;
    }
    cout << ans;
}