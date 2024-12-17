/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], a[10000000], t;
kien maxx, vtr, ans, l, r, dp[1000000];
map <long long , int> pp;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	pp[0]++;
	for (int i = 1; i <= n; i++)
	{
		maxx += a[i];
		maxx = (maxx % k + k) % k;
		ans += pp[maxx];
		pp[maxx]++;
	}
	cout << ans;
}