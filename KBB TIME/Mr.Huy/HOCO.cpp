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
kien n,k,m,dem, A, B;
kien maxx,minn, vtr,ans = LLONG_MAX,l,r;
kien a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    for (int i = 2; i <= n; i++)
    {
        ans = min(ans , a[i] - a[i-1]);
    }
    cout << ans;
}