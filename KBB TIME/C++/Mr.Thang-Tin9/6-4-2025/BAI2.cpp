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
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, tong;

int tongcs(int n)
{
	int dem = 0;
	while (n > 0)
	{
		dem++;
		n /= 10;
	}
	return dem;
}

bool ktr(int tong, int i, int n)
{
	int ans = 0;
	while (n > 0)
	{
		ans += pow(n % 10, tong);
		n /= 10;
	}
	if (ans == i)
	{
		return true;
	}
	else
	{
		return false;
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 153; i <= n; i++)
    {
    	tong = tongcs(i);
    	if (ktr(tong, i, i))
    	{
    		cout << i << " ";
    	}
    }
}
    