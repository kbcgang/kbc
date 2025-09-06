/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, need, sum, f[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen ("kien.inp", "r", stdin);
//    freopen ("kien.out", "w", stdout);
    cin >> n;
    /// Chiều rộng của các tấm ván lần lượt là 18, 21, 25
    /// n = 1, need = 2, wood = {17 , 18, 25, 21, 39}
    /// Gộp block để xây 6 cây cầu
    /// 1 block -> 7 kiện ván
    /// 6 * (n / 6) + r + (n / 6 - r) (1 <= r <= 5)
    cout << n + (n + 5) / 6;
}
