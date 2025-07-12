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
int t, n, a[Million];

JAV() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) 
    {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int pp[Million], dem = 0;
        for (int i = 0; i < n; ++i) {
            if (dem == 0 or pp[dem - 1] != a[i]) {
                pp[dem++] = a[i];
            }
        }
        int ans = 0;
        int cuoi = -2000000000;
        for (int i = 0; i < dem; ++i) {
            if (pp[i] > cuoi + 1) {
                ++ans;
                cuoi = pp[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
