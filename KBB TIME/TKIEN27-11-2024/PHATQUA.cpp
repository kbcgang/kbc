/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], a[1000000], t;
kien maxx, minn = INT_MAX, vtr, ans, l, r, dp[1000000];
string s,x;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> l >> r;
	m = __gcd(l,r);
	for (int i = 1; i <= sqrt(m); i++)
	{
		if (m % i == 0)
		{
			dem++;
			if (m / i != i)
			{
				dem++;
			}
		}
	}
	cout << dem;
}