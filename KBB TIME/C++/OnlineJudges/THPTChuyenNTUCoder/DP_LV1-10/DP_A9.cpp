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
kien a[1001][1001], dp[1001][1001];

JAV()
{
    int M, N, T;
    cin >> M >> N;
    for (int i = 1; i <= M; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            cin >> a[i][j];
            dp[i][j] = a[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }
    cin >> T;
    while (T--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = dp[x2][y2] - (x1 > 1 ? dp[x1 - 1][y2] : 0) - (y1 > 1 ? dp[x2][y1 - 1] : 0) + (x1 > 1 && y1 > 1 ? dp[x1 - 1][y1 - 1] : 0);
        cout << sum << '\n';
    }

    return 0;
}
