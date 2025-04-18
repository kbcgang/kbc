///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    cin >> n >> k;
    pair<int, int> a[Million];
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + k);
    for (int i = 1; i <= k; i++)
    {
        vtr += a[i].second;
        if (vtr > n)
        {
            vtr -= a[i].second;
            ans += a[i].first * (n - vtr);
            break;
        }
        else
        {
            ans += a[i].first*a[i].second;
            if (vtr == n)
            {
                cout << ans;
                exit(0);
            }
        }
    }
    cout << ans;
}