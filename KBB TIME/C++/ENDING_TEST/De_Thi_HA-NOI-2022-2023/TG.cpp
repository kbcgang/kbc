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
kien maxx, minn, t;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    	cin >> t;
    	if (t < 60)
    	{
    		if (t < 10)
    			cout << "8:0" << t << "\n";
    		else
    			cout << "8:" << t << "\n";
    	}
    	else
    	{
    		if (t - 60 < 10)
    			cout << 8 + t / 60 << ":0" << t - 60 << "\n";
    		else
    			cout << 8 + t / 60 << ':' << t - 60 << "\n";
    	}
    }
}
    