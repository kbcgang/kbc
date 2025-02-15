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
kien n, y, ans;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    n = 2 * n;
    ans = 0;
    for (int x = 2; x <= sqrt(n); x++)
    {
        if (n % x == 0)
        {
            y = n / x;
            if (x + y & 1)
            {
                ans++;
            }
        }
    }
    cout << ans;
}
/// Tổ quốc ngàn năm sử trường tồn
/// Ngâm nga câu khúc điệu dòng sông
/// dòng sông