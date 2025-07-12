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
kien maxx, minn, vtr, ans, l, r, dp[1000000];
vector <kien> v;
unordered_map <kien, kien> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
    	cin >> a >> b;
    	v.push_back(a);
    	v.push_back(b + 1);
    	pp[a]++;
    	pp[b + 1]--;
    }
    sort (v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i + 1 < v.size(); i++) {
    	vtr += pp[v[i]];
    	if (vtr == k) {
    		ans += (v[i + 1] - v[i]);
    	}
    }
    cout << ans;
}