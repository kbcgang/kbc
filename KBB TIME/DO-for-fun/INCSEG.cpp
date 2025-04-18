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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    dem = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        
    }
    a[n + 1] = INT_MIN;
    for (int i = 1; i <= n + 1; i++)
    {
        if (a[i] >= a[i-1])
        {
            f[dem]++;
        }
        else
        {
            cout << f[dem] << " ";
            f[dem++]++;
        }
    }
    cout << *max_element(f + 1, f + 1 + dem);
    
}
