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
kien maxx,minn[Million], vtr,ans,l,r;

int tknp(int j)
{
    int l = 1, r = j - 1;
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[j] - minn[mid - 1] >= k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return r+1;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    minn[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        ans = max(ans, 1LL*(i - tknp(i) + 1));
        minn[i] = min(minn[i-1], a[i]);
    }
    cout << ans;
}