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
kien n,k;
kien maxx,minn, vtr,ans = INT_MAX,l,r;
kien a[Million], dem[Million];
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
        if (dem[a[i]] > maxx)
        {
            ans = a[i];
            maxx = dem[a[i]];
        }
        else if (dem[a[i]] == maxx)
        {
            ans = min(ans, a[i]);
        }
    }
    cout << ans;
}