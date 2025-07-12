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
kien maxx, minn, ans, l, r, dp[1000000];
unordered_map <kien, int> pp;
unordered_map <kien, int> vtr;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
    	pp[a[i]]++;
    	if (pp[a[i]] == 1) {
    		vtr[a[i]] = i;
    	}
    	if (k - a[i] == a[i]) {
    		if (pp[a[i]] >= 2) {
    			cout << vtr[a[i]] << " " << i;
    			exit(0);
    		}
    	}
    	else if (pp[k - a[i]] > 0) {
    		cout << min(vtr[a[i]],vtr[k - a[i]]) << " " << max(vtr[a[i]], vtr[k - a[i]]);
    		exit(0);
    	}
    }
    cout << -1;
}
    