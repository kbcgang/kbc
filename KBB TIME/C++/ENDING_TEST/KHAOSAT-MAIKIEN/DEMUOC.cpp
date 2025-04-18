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
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void sang() 
{
    for (int i = 1; i <= Million; i++)
    {
    	f[i] = 0; 
    }
    for (int i = 1; i <= Million; i++) 
    {
        for (int j = i * 2; j <= Million; j += i) 
        {
            f[j]++;
        }
    }
}


JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang();
    for (int i = 1; i <= 7; i++)
    {
    	if (dp[i - 1] < f[i])
    	{
    		dp[i] = f[i];
    		a[i] = i;
    	}
    	else
    	{
    		a[i] = a[i-1];
    		dp[i] = dp[i-1];
    	}
    }
    cin >> n;
    cout << a[n];
}
    