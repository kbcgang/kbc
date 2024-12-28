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
float c[Million];
kien n, k, m, dem, f[NT + 5];
kien maxx, minn, vtr, l, r, dp[1000000];
pair<kien, kien> a[1000000];

int tong(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

// bool compare (float x, float y)
// {
//     if (x > y)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    vector<pair<double, pair<int, int>>> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c.push_back({(double)a[i] / b[i], {a[i], b[i]}});
    }
    sort(c.begin(), c.end());
    kien mmm = __gcd(c[k - 1].second.first, c[k - 1].second.second);
    cout << c[k - 1].second.first / mmm << " " << c[k - 1].second.second / mmm << endl;
}