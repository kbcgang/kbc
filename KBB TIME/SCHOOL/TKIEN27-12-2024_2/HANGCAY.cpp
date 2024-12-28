/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

kien main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien n, m;
    cin >> n >> m;
    vector<pair<kien, kien>> a;
    for (kien i = 0; i < m; i++)
    {
        kien xi, ri;
        cin >> xi >> ri;
        a.push_back({xi - ri, xi + ri});
    }
    sort(a.begin(), a.end());
    kien ans = 0, last_end = 0;
    for (auto range : a)
    {
        if (range.first > last_end)
        {
            ans += range.second - range.first + 1;
            last_end = range.second;
        }
        else if (range.second > last_end)
        {
            ans += range.second - last_end;
            last_end = range.second;
        }
    }

    cout << min(ans, n) << endl;

    return 0;
}

