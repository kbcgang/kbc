/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n;
kien a[Million], b[Million];

kien batdongsan(kien a[], kien n)
{
    kien dp[n], ans = 0;
    for (int i = 1; i <= n; i++)
    {
        kien pos = lower_bound(dp, dp + ans, a[i]) - dp;
        dp[pos] = a[i];
        if (pos == ans)
            ans++;
    }
    return ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[n - i - 1] = a[i];
    }
    kien lis = batdongsan(a, n);
    kien lds = batdongsan(b, n);
    cout << n - max(lis, lds) << endl;
}
