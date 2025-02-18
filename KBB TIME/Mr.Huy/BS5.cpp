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
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r, dp[1000000];

kien tknp(kien k)
{
    kien l = 1, r = sqrt(k) + 1;
    kien mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (mid * mid * mid - 2 * mid + 5 == k)
        {
            return mid;
        }
        else if (mid * mid * mid - 2 * mid + 5 > k)
        {
            r = mid - 1;
        }
        else if (mid * mid * mid - 2 * mid + 5 < k)
        {
            l = mid + 1;
        }
    }
    if (mid * mid * mid - 2 * mid + 5 == k)
    {
        return mid;
    }
    return -1;
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
    kien q;
    cin >> q;
    while (q--)
    {
        cin >> k;
        cout << tknp(k) << "\n";
    }
}