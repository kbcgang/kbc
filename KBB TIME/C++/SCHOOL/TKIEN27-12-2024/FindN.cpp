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
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;
vector<kien> a;

void monica(kien s)
{
    if (s > 0)
    {
        a.push_back(s);
    }
    if (s * 10 + 4 <= 1e18)
    {
        monica(s * 10 + 4);
    }
    if (s * 10 + 7 <= 1e18)
    {
        monica(s * 10 + 7);
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    kien t;
    monica(0);
    sort(a.begin(), a.end());

    cin >> t;
    while (t--)
    {
        kien n;
        cin >> n;
        cout << a[n - 1] << endl;
    }

    return 0;
}