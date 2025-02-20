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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien n, x, y;
    cin >> n >> x >> y;
    if (y > x)
    {
        cout << "NO\n";
    }
    else if (n == 1)
    {
        cout << (y <= x ? "YES\n" : "NO\n");
    }
    else
    {
        cout << ((x - y) >= y * sin(M_PI / n) ? "YES\n" : "NO\n");
    }
}
