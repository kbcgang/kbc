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
kien maxx, minn, vtr, ans, dp[1000000];
kien t;
string s;

bool ktr(int mid, int kt)
{
	int vtr = 0;
	for (int i = 0; i < s.size(); i++)
	{
		 if (s[i] == 'B' and a[i] > mid)
		 {
		 	kt--;
		 	while (vtr == 0)
		 	{
		 		i++;
		 		if (s[i] == 'R' and a[i] > mid)
		 		{
		 			vtr = 1;
		 		}
		 		if (i >= n)
		 		{
		 			vtr = 1;
		 		}
		 	}
		 	vtr = 0;
		 }
	}
	if (kt >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void tknp()
{
	int l = 0, r = maxx;
	int mid, kq = -1;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (ktr(mid, k))
		{
			r = mid - 1;
			kq = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	cout << kq << "\n";
}


JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
	while (t--)
	{
		cin >> n >> k;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			maxx = max(maxx, a[i]);
		}
		tknp();
	}    
    // cin >> n >> k;
    // cin >> s;
    // for (int i = 0; i < n; i++)
    // {
    // 	cin >> a[i];
    // 	maxx = max(maxx, a[i]);
    // }    
    // tknp();
}