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

kien phantich(kien num, kien x)
{
    kien count = 0;
    while (num % x == 0)
    {
        num /= x;
        count++;
    }
    return count;
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    kien N, K;
    cin >> N >> K;
    vector<kien> A(N);
    vector<kien> count2(N), count5(N);

    for (kien i = 0; i < N; i++)
    {
        cin >> A[i];
        count2[i] = phantich(A[i], 2);
        count5[i] = phantich(A[i], 5);
    }
    vector<vector<kien>> dp(N + 1, vector<kien>(K + 1, -1e9));
    dp[0][0] = 0;

    for (kien i = 1; i <= N; i++)
    {
        for (kien j = K; j >= 1; j--)
        {
            if (dp[i - 1][j - 1] != -1e9)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + count5[i - 1]);
            }
        }
    }
    kien ans = 0;
    for (kien j = 0; j <= N; j++)
    {
        if (dp[j][K] != -1e9)
        {
            kien sum2 = accumulate(count2.begin(), count2.begin() + j, 0LL);
            ans = max(ans, min(sum2, dp[j][K]));
        }
    }

    cout << ans << '\n';
    return 0;
}
