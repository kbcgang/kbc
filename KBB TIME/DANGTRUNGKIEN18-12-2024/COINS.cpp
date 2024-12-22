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
kien n, m, a[1000005], b[1000005];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (kien i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    kien total = 0;
    vector<pair<kien, kien>> v;
    for (kien i = 0; i < n; i++)
    {
        v.push_back({b[i], a[i]});
    }
    sort(v.begin(), v.end());
    for (kien i = 0; i < n; i++)
    {
        if (m >= v[i].first)
        {
            m -= v[i].first;
            total += v[i].second;
        }
    }
    cout << total << endl;
    return 0;
}
