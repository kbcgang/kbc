///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,ans,m,dem, a[1000000];
kien minn[Million], vtr,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    minn[0] = 1e9;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
        minn[i] = min(minn[i-1], a[i]);
    }
    ans = -1e9;
    for (kien i = 1; i <= n; i++)
    {
        ans = max(ans, a[i] - minn[i - 1]);
    }
    cout << ans;
}