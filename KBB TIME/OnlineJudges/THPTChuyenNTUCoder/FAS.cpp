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

int min_cost(int N, vector<int> &a)
{
    vector<int> dp(N + 1);
    dp[2] = abs(a[1] - a[0]);

    for (int i = 3; i <= N; ++i)
    {
        dp[i] = min(dp[i - 1] + abs(a[i - 1] - a[i - 2]), dp[i - 2] + abs(a[i - 1] - a[i - 3]));
    }

    return dp[N];
}

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    cout << min_cost(N, a) << endl;

    return 0;
}
