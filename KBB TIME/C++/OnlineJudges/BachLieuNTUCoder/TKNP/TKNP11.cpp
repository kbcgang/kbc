///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, ans;
kien a[1005], b[1005], c[1005];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    sort(c + 1, c + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            kien sum_ab = a[i] + b[j];
            int l = lower_bound(c + 1, c + 1 + n, abs(a[i] - b[j]) + 1) - c;
            int r = upper_bound(c + 1, c + 1 + n, sum_ab - 1) - c - 1;
            if (l <= r)
            {
                ans += (r - l + 1);
            }
        }
    }
    cout << ans << "\n";
}
