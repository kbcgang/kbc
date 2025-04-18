/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 80000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5], a[Million];
kien maxx, minn, vtr, ans, l, r;
kien t;
unordered_map <int, int> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			pp[a[i]]++;
			f[i] = f[i-1] + a[i];
			maxx = max(maxx, a[i]);
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (f[j] - f[i-1] > maxx)
				{
					break;
				}
				if (pp[f[j] - f[i-1]] > 0)
				{
					ans += pp[f[j] - f[i-1]];
					pp[f[j] - f[i-1]] = 0;
				}
			}
		}
		cout << ans << "\n";
		pp.clear();
		maxx = 0;
		ans = 0;
		for (int i = 1; i <= n; i++)
		{
			a[i] = 0;
			f[i] = 0;
		}
	}    
    
}
    


