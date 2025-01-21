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
kien n,k,m,dem, a[1000000];
kien maxx[Million + 5],minn[Million + 5], vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx[i] = max(maxx[i-1], a[i]);
    }
    for (int i = n; i>= 1; i--)
    {
        minn[i] = min(minn[i+1], a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, maxx[i-1] + a[i] + minn[i+1]);
    }
    cout << ans;
}