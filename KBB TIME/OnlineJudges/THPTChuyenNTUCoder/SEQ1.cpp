///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, f[Million], a[1000000];
kien dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fill(dp, dp + n + 1, 1e9);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = min(dp[i - 1], a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        f[i] = a[i] - dp[i-1];
    }
    cout << *max_element(f + 1, f + n + 1);
}