/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int ans, n, k, m, dem, f[Million + 5], a[1000000];
unordered_map <int , int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    pp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (pp[f[i] - k] > 0)
        {
            ans += pp[f[i] - k];
        }
        pp[f[i]]++;
    }
    cout << ans;    
}
