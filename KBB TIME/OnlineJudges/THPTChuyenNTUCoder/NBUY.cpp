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
kien n, k, m, dem, dp[Million];
kien maxx, minn, vtr, ans, l, r;
pair<kien, kien> a[101];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    maxx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
        maxx = max(maxx, a[i].first);
    }
    fill(dp + 1, dp + 1 + k + maxx, INT_MAX);
    maxx += k;
    sort(a + 1, a + n + 1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = a[i].first; j <= maxx; j++)
        {
            if (dp[j - a[i].first] != INT_MAX)
            {
                dp[j] = min(dp[j], dp[j - a[i].first] + a[i].second);
            }
        }
    }
    ans = INT_MAX;
    for (int i = k; i <= maxx; i++)
    {
        ans = min(ans, dp[i]);
    }
    cout << (ans == INT_MAX ? -1 : ans);
}

// ///Hãy làm Sư tử, đừng làm Nai.😅😅😅
// ///Hãy làm thợ săn, đừng làm con mồi.
// /// --- trungkien1252010@gmai.com ---
// ///☆*: .｡. o(≧▽≦)o .｡.:*☆
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main

// kien n, k, maxP = 0;
// pair<kien, kien> a[101];

// JAV() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> n >> k;

//     for (int i = 1; i <= n; i++) {
//         cin >> a[i].first >> a[i].second;
//         maxP = max(maxP, a[i].first); // Lưu tải trọng lớn nhất
//     }

//     kien maxSize = k + maxP; // Mở rộng mảng dp để kiểm tra cả các tổ hợp vượt k
//     vector<kien> dp(maxSize + 1, LLONG_MAX);
//     dp[0] = 0;

//     for (int i = 1; i <= n; i++) {
//         for (int j = a[i].first; j <= maxSize; j++) {
//             if (dp[j - a[i].first] != LLONG_MAX) {
//                 dp[j] = min(dp[j], dp[j - a[i].first] + a[i].second);
//             }
//         }
//     }

//     kien result = LLONG_MAX;
//     for (int i = k; i <= maxSize; i++) {
//         result = min(result, dp[i]);
//     }

//     cout << (result == LLONG_MAX ? -1 : result);
// }
    