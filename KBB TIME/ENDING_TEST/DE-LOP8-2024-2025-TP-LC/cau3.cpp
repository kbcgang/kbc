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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void sangNT()
{
	f[1] = 1;
	for (int i = 2; i <= sqrt(Million); i++)
	{
		if (f[i] == 0)
		{
			for (int j = i * i; j <= Million; j += i)
			{
				f[j] = 1;
			}
		}
	}
}

bool dao(int n)
{
	int m = n;
	int so = 0;
	while (n > 0)
	{
		so *= 10;
		so += n % 10;
		n /= 10;
	}
	if (m == so)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ktr()
{
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;
	dp[5] = 3;
	dp[6] = 3;
	dp[7] = 4;
	dp[8] = 4;
	dp[9] = 4;
	dp[10] = 4;
	for (int i = 11; i <= Million; i++)
	{
		dp[i] = dp[i-1];
		if (f[i] == 0)
		{
			if (dao(i))
			{
				dp[i]++;
			}
		}
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    ktr();
    int t;
    cin >> t;
    while (t--)
    {
    	cin >> l >> r;
    	cout << dp[r] - dp[l - 1] << "\n";
    }
}
    