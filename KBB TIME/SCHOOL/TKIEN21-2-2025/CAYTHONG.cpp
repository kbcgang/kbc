///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,a[Million + 5], b[Million];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

int am(int x)
{
    int l = 1, r = n;
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            l = mid + 1;
        }
        else r = mid - 1;
    }
    if (a[r + 1] == x) return r + 1;
    if (abs(a[r + 1] - x) > abs(a[r + 2] - x)) return r + 2;
    else
    return r + 1;
}

int duong(int x, int vtr)
{
    int l = 1, r = vtr;
    if (vtr == 1)
    {
        return r;
    }
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (abs(a[mid]) <= x)
        {
            l = mid + 1;
        }
        else r = mid - 1;
    }
    if (abs(a[r + 1]) == x) return r + 1;
    if (abs(a[r + 1] + x) > abs(a[r + 2] + x)) return r + 2;
    else
    return r + 1;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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
        dp[i] = INT_MAX;
    }
    sort (a + 1, a + n + 1);
    sort (b + 1, b + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (b[i] > 0)
        {
            vtr = i - 1;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0)
        {
            dp[i] = abs(a[i] + b[am(abs(a[i]))]);
        }
        else
        {
            dp[i] = abs(a[i] + b[duong(a[i], vtr)]);
        }
    }
    cout << "\n";
    cout << *min_element(dp + 1, dp + n + 1);
}