#include <bits/stdc++.h>
#define int long long
#define vip 10000007
using namespace std;
int a[vip], n, d, k;
int32_t main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        int s = a[i] + k;
        int l1 = lower_bound(a + 1 + i, a + 1 + n, s) - a;
        int l2 = upper_bound(a + 1 + i, a + 1 + n, s) - a;
        d += l2 - l1;
    }
    cout << d;
}