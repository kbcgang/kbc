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
kien n, dem, maxx = 0, ans = 0, minn = 0, vtr = 0;
kien a[Million];
unordered_map <int, int> f;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
        if (f[a[i]] == 1)
        {
            vtr++;
        }
    }
    sort (a + 1, a + n + 1);
    dem = vtr;
    vtr = 1;
    a[0] = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > a[i-1])
        {
            dem--;
            ans += dem;
        }
        else
        {
            ans += dem;
        }
    }
    cout << ans;
}