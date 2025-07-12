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
kien st[4 * 100000 + 5][30];
string s;

void build (int id, int l, int r) {
	if (l == r) {
		for (int c = 0; c < 26; c++) {
			st[id][c] = 0;
		}
		st[id][s[l] - 'a'] = 1;
	}
	else {
		int mid = (l + r) / 2;
		build (id * 2, l , mid);
		build (id * 2 + 1, mid + 1, r);
		for (int c = 0; c < 26; c++) {
			st[id][c] = st[id << 1][c] + st[id << 1 | 1][c];
		}
	}
} 

void update (int id, int l, int r, int pos, int val) {
	if (l == r) {
		for (int c = 0; c < 26; c++) {
			st[id][c - 'a'] = 1;
		}
		return;
	}
	int mid = (l + r) / 2;
	if (pos <= mid) {
		update (id * 2, l, mid, pos, val);
	}
	else {
		update (id * 2 + 1, mid + 1, r, pos, val);
	}
	for (int c = 0; c < 26; c++) {
		st[id][c] = st[id * 2][c] + st[id * 2 + 1][c];
	}
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   	cin >> s;
   	kien q, t, pos;
   	char c;
   	build (1 , 0, n - 1);
   	cin >> q;
   	while (q--) {
   		cin >> t;
   		if (t == 1) {
   			cin >> pos >> c;
   		}
   		else {
   			cin >> l >> r;
   		}
   	}
    
}
    