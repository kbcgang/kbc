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
kien maxx,minn, vtr,ans,l,r, dp[1000000];

kien tknp(kien ans)
{
    kien l = 1, r = n;
    kien mid, kq = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] < ans)
        {
            l = mid + 1;
            kq = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // if (fopen("DAYDEN.inp","r"))
    // {
    //     freopen("DAYDEN.inp", "r", stdin);
    //     freopen("DAYDEN.out", "w", stdout);
    // }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> ans;
        cout << tknp(ans) << "\n";
    }
}