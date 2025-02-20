/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    kien n, k;
    cin >> n >> k;
    vector<kien> a(n);
    for (kien &x : a)
        cin >> x;
    kien l = 0, tong = 0, maxAvg = 0, len = 0;
    for (kien right = 0; right < n; right++)
    {
        tong += a[right];

        while (tong > k)
        {
            tong -= a[l++];
        }
        kien avg = tong / (right - l + 1);
        maxAvg = max(maxAvg, avg);
    }

    cout << maxAvg << '\n';
    return 0;
}
