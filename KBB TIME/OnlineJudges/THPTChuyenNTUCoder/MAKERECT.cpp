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

JAV()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<int, int> dem;
    for (int dodai : a)
    {
        dem[dodai]++;
    }
    vector<int> keo;
    for (auto &[dodai, freq] : dem)
    {
        if (freq >= 2)
        {
            keo.push_back(dodai);
        }
    }
    sort(keo.rbegin(), keo.rend());
    long long maxx = 0;
    int side1 = 0, side2 = 0;
    for (int i = 0; i < keo.size() - 1; ++i)
    {
        if (dem[keo[i]] >= 4)
        {
            maxx = max(maxx, 1LL * keo[i] * keo[i]);
        }
        if (dem[keo[i]] >= 2 && dem[keo[i + 1]] >= 2)
        {
            maxx = max(maxx, 1LL * keo[i] * keo[i + 1]);
            break;
        }
    }
    cout << maxx << endl;
    return 0;
}
