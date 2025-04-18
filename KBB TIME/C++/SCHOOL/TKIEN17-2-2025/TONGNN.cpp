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
kien n, k, m, dem, uoc[Million];
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ans = INT_MAX;
    cin >> n >> m;
    if (n == 0 or m == 0)
    {
        cout << -1;
        exit(0);
    }
    if (__gcd(n, m) == 1 and n == 1)
    {
        cout << n + m;
        exit(0);
    }
    if (__gcd(n, m) == 1 and n != 1)
    {
        cout << -1;
        exit(0);
    }
    if (n == m)
    {
        cout << n + m;
        exit(0);
    }
    for (int i = 1; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            dem++;
            uoc[dem] = i;
            if (m / i != i)
            {
                dem++;
                uoc[dem] = m / i;
            }
        }
    }
    sort(uoc + 1, uoc + 1 + dem);
    for (int i = 1; i <= dem; i++)
    {
        if (__gcd(n * uoc[i], m / uoc[i]) == n)
        {
            if ((n * uoc[i]) * (m / uoc[i]) / __gcd(n * uoc[i], m / uoc[i]) == m)
            {
                ans = min(ans, n * uoc[i] + m / uoc[i]);
            }
        }
    }
    cout << ans;
}