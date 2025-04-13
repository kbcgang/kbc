#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, k, a[1000005], ans;
int pick(int x, int r)
{
    int ans = -1;
    int l = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] > x)
            r = m - 1;
        else
        {
            ans = m;
            l = m + 1;
        }
    }
    return ans;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = n - 1; i >= 1; i--)
    {
        int x = k - a[i];
        int res = pick(x, i - 1);
        ans += res + 1;
    }
    cout << ans;
}