/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien n, k, b, dem, a[1000000];
kien maxx, minn, vtr, vtr1, ans, l, r, dp[1000000], dp1[Million];

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
    kien maxx = -1e18, sum = 0;
	for (int i = 1; i <= n; i++)
	{
    	sum = max(sum + a[i], a[i]);
    	maxx = max(maxx, sum);
    	dp[i] = maxx;
	}

    maxx = -1e18; sum = 0;
	for (int i = n; i >= 1; i--)
	{
    	sum = max(sum + a[i], a[i]);
    	maxx = max(maxx, sum);
    	dp1[i] = maxx;
	}

    ans = INT_MIN;
    for (int i = 1; i < n; i++) 
	{
    	ans = max(ans, dp[i] + dp1[i+1]);
	}

    cout << ans;
}
    