///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
#define kien long long
#define JAV main
using namespace std;
const kien inf = LLONG_MAX;
const kien mod = 1e9 + 7;
kien n;
kien dao(kien n)
{
    kien s = 0;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if (n == dao(n))
        cout << 1;
    else
        cout << -1;
}