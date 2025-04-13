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
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void contro()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
    	cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int i = 1, j = n;
    while (i < j)
    {
    	if (a[i] + a[j] <= k)
    	{
    		ans += (j - i);
    		i++;
    	}
    	else
    	{
    		j--;
    	}
    }
    cout << ans;
}

int tknp1(int x)
{
    int l = 1, r = n; 
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
            kq = mid;
        }
    }
    return kq;
}

void tknp()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    cout << tknp1(2);
    for (int i = 1; i <= n; i++)
    {
        m = tknp1(k - a[i]);
        if (m != -1)
        ans += (m - i);
    }
    cout << ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    tknp();
}
    
