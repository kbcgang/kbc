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
kien n, t , a,b, ans, care, dem;
kien book[Million], dp[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t >> a >> b;
    for (int i = 1; i <= n; i++)
    {
    	cin >> book[i];
    }
    for (int i = n; i >= 1; i--)
    {
    	care += book[i];
    	dem = (a * (n - i + 1) + b * (n - (n - i + 1)));
    	if (dem <= t)
    	{
    		ans = max(ans, care);
    	}
    	else
    	{
    		break;
    	}
    }
    cout << ans;
}
    