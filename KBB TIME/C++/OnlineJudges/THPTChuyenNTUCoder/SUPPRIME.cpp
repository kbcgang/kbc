/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmail.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define MAXN 1000000
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
#define JAV main
bool dp[MAXN];
vector<kien> a;
vector<kien> f;

void sang()
{
    fill(dp, dp + MAXN, true);
    dp[0] = dp[1] = false;

    for (kien i = 2; i < MAXN; i++)
    {
        if (dp[i])
        {
            a.push_back(i);
            for (kien j = i * i; j < MAXN; j += i)
            {
                dp[j] = false;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang();
    for (kien i = 0; i < a.size(); i++)
    {
        if (dp[i + 1])
        {
            f.push_back(a[i]);
        }
    }
    kien n;
    cin >> n;
    cout << f[n - 1];
}
