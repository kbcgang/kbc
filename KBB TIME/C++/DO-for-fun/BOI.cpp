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
kien n, k, m, dem, a[1000006];
kien maxx, minn, vtr, ans, l, r;
static int pp[Million + 5];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    	pp[a[i]]++;
    	maxx = max(maxx, a[i]);
    }
    for (int i = 1; i <= maxx; i++) {
    	if (pp[i] > 0) {
    		if (pp[i] >= 2) {
    			ans += (pp[i] * (pp[i] - 1)) / 2;
    		}
    		for (int j = i * 2; j <= maxx; j += i) {
    			if (pp[j] > 0) {
    				ans += pp[i] * pp[j];
    			}
    		}
    	}
    }
    cout << ans;
}
    