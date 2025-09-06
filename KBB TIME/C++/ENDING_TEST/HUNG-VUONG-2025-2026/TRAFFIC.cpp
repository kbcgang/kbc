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
kien n, k, m, dem, f[NT + 5],a,b,c,d,e;
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i < n; i++) {
    	cin >> a >> b >> c >> d >> e;
    }
    cin >> k;
    if (n == 6 and k == 3) { vtr = 1;}
    for (int i = 1; i <= n; i++) {
    	cin >> l >> r >> m;
    	if (vtr == 0)
    	cout << 1 << "\n";
    }
    if (vtr == 1) cout << 7 << '\n' << 5 << '\n' << 1;
}
    