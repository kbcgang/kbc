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
kien n, a[Million];

JAV()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    kien dem = 0;
    sort(a + 1, a + n + 1, greater<kien>());
    for (kien i = 1; i <= n; i++)
    {
        dem++;
        if (a[i] != a[i + 1])
        {
            break;
        }
    }
    cout << dem;
}
