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
kien n, k, m, dem, x, a[1000000];
kien maxx, minn, vtr, ans1, ans2, l, r, dp[1000000];
unordered_map <string, int> pp;
string s;
vector <string> p;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin >> s) {
    	if (pp[s] == 0) {
    		p.push_back(s);
    	}
    	for (int i = 0; i < s.size(); i++) {
    		if (s[i] >= '0' and s[i] <= '9') {
    			ans2++;
    			break;
    		}
    	}
    	pp[s]++;
    }
    for (int i = 0; i < p.size(); i++) {
    	if (pp[p[i]] == 1) {
    		ans1++;
    	}
    }
    cout << ans1 << "\n" << ans2;
}
    