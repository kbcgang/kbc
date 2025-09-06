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
kien maxx, minn, vtr, ans, l, r, dp[2505][2505];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    string s;
    string x;
    cin >> s;
    cin >> x;
    for (int i = 1; i < s.size(); i++) {
    	for (int j = 1; j < x.size(); j++) {
    		if (s[i - 1] == x[j - 1]) {
    			dp[i][j] = dp[i - 1][j - 1] + 1;
    		}
    		else {
    			dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
    		}
    	}
    }	
	cout << dp[s.size() - 1][x.size() - 1];
}
    