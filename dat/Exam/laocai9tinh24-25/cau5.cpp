#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int a[100005];
int b[100005], d;
int KBCGPT(int x)
{
    int l = 0, r = d;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] > x)
            l = m + 1;
        else
            r = m - 1;
    }
    return r + 1;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (d == 0 || b[d - 1] < a[i])
            b[d++] = a[i];
        else
            b[lower_bound(b, b + d, a[i]) - b] = a[i];
    int ans = n - d;
    d = 0;
    for (int i = 0; i < n; i++)
        if (d == 0 || a[d - 1] > a[i])
            a[d++] = a[i];
        else
            a[KBCGPT(a[i])] = a[i];
    cout << min(ans, n - d);
}