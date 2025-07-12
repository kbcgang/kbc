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
JAV()
{    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int ans = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans++;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        ans++;
    cout << ans;
}