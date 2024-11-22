#include <bits/stdc++.h>
using namespace std;

int n, k, a[100005], ans, dem[100];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) a[i] = a[i] % k;
    for (int i = 0; i < n; i++) dem[a[i]]++;

    if (dem[0] > 0) ans = 1;

    for (int i = 1; i <= k / 2; i++)
    {
        if (i * 2 == k)
        {
            ans += min(dem[i], 1);
        }
        else
        {
            ans += max(dem[i], dem[k - i]);
        }
    }

    cout << ans;
    return 0;
}
