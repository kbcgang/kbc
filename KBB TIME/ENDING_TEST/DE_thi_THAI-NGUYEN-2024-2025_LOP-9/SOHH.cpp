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
int a,b;
int f[NT + 5], dp[NT + 5];

void sanguoc()
{
	for (int i = 1; i <= NT; i++)
	{
		f[i] = 1;
	}
	f[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= NT; i++)
	{
		for (int j = i * 2; j <= NT; j += i)
		{
			f[j] += i;
		}
		dp[i] = dp[i-1] + abs(i - f[i]);
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sanguoc();
    cin >> a >> b;
    cout << dp[b] - dp[a - 1];
}
    