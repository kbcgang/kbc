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
kien n, k, m, dem, a[5][Million];
kien maxx, minn, vtr, ans, l, r, dp[Million][16];

kien get (kien col, kien mask) {
	kien sum = 0;
	for (int i = 0; i < 4; i++) {
		if ((mask >> i) & 1) {
			sum += a[i][col];
		}
	}
	return sum;
}

bool ktr (kien mask1, kien mask2) {
	for (int i = 0; i < 4; i++) {
		if ((mask1 >> i) & 1 and (mask2 >> i) & 1) {
			return false;
		}
	}
	return true;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < 4; i++) {
    	for (int j = 0; j < n; j++) {
    		cin >> a[i][j];
    	}
    }
    for (int mask = 0; mask < 16; mask++) {
    	/// 0001 = 8, 1000 = 1, 0100 = 2, 0010 = 4, 1010 = 5, 1001 = 9, 0101 = 10, 0000 = 0
    	if (mask == 0 or mask == 1 or mask == 2 or mask == 4 or mask == 5 or mask == 8
    		or mask == 9 or mask == 10) {
    		dp[0][mask] = get(0, mask);
    	}
    	else {
    		dp[0][mask] = LLONG_MIN;
    	}
    }
    for (int col = 1; col < n; col++) {
    	for (int mask = 0; mask < 16; mask++) {
    		if (mask == 0 or mask == 1 or mask == 2 or mask == 4 or mask == 5 or mask == 8
    			or mask == 9 or mask == 10) {
    			vtr = get(col, mask);
    			for (int mask1 = 0; mask1 < 16; mask1++) {
    				if (ktr(mask, mask1)) {
    					dp[col][mask] = max(dp[col][mask], dp[col - 1][mask1] + vtr);
    				}
    			}
    		}
    	}
    }
    for (int mask = 0; mask < 16; mask++) {
    	ans = max(ans, dp[n - 1][mask]);
    }
    cout << ans;
}
    