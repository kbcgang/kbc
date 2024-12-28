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

JAV()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    kien n, k;
    cin >> n >> k;
    kien cnt[200005];
    for (kien x, i = 1; i <= n; i++)
    {
        cin >> x;
        cnt[x]++;
    }
    sort(cnt + 1, cnt + 1 + k);
    if (n <= 2 * cnt[k])
    {
        cout << 2 * (n - cnt[k]);
    }
    else
    {
        cout << 2 * (n / 2);
    }
}