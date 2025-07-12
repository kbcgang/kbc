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
kien n, k, m, dem, a, b;
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien x , y, t;
    cin >> t;
    while (t--) {
    	cin >> k >> a >> b >> x >> y;
    	if (k >= max(a, b)) {
    		if (min(x , y) == x) {
    			ans += ((k - a) / x + 1);
    			k -= x * ((k - a) / x + 1);
    			if (k >= b) {
    				ans += ((k - b) / y + 1);
    				k -= y * ((k - b) / y + 1);
    			}
    		}
    		else {
    			ans += ((k - b) / y + 1);
    			k -= y * ((k - b) / y + 1);
    			if (k >= a) {
    				ans += ((k - a) / x + 1);
    				k -= x * ((k - a) / x + 1);
    			}
    		}
    	}		
    	else if (k >= a) {
    		ans += ((k - a) / x + 1);
    		k -= x * ((k - a) / x + 1);
    	}
    	else if (k >= b) {
    		ans += ((k - b) / y + 1);
    		k -= y * ((k - b) / y + 1);
    	}
    	cout << ans << "\n";
    	ans = 0;
    }

}
    