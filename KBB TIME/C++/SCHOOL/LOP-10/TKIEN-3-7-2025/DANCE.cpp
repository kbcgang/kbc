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
kien n, k, m, dem, b[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
    	cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
    	cin >> b[i];
    }
    sort (b + 1, b + 1 + n);
    sort (a + 1, a + 1 + m);
    int i = 1, j = 1;
    while (i <= m and j <= n) {
    	if (a[i] > b[j]) {
    		ans++;
    		i++;
    		j++;
    	}
    	else {
    		i++;
    	}
    }
    cout << ans;
}
    