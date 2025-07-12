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

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    deque <kien> q;
    for (int i = 1; i <= n; i++) {
    	q.push_back(a[i]);
    }
    while (k > 0) {
    	k--;
    	vtr = q.back();
    	q.pop_back();
    	vtr += q.back();
    	q.pop_back();
    	q.push_back(vtr);
    	q.push_back(vtr);
    }
    ans = 1;
    while (!q.empty()) {
    	ans *= q.back();
    	q.pop_back();
    }
    cout << ans;
}
     