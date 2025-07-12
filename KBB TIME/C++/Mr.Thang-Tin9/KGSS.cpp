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
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, l, r;
pair <kien, kien> st[Million];
char c;

void build(int id, int l, int r) {
	if (l == r) {
		st[id] = {a[l], -1};
	}
	else {
		int mid = (l + r) / 2;
		build(id * 2, l , mid);
		build(id * 2 + 1, mid + 1, r);
		vector <kien> tp;
		tp.push_back(st[id * 2].first);
		tp.push_back(st[id * 2].second);
		tp.push_back(st[id * 2 + 1].first);
		tp.push_back(st[id * 2 + 1].second);
		sort(tp.rbegin(), tp.rend());
		st[id].first = tp[0];
		st[id].second = tp[1];
	}
}

void update(int id, int l, int r, int pos, int val) {
	if (l == r) {
		st[id] = {val, -1};
	}
	else {
		int mid = (l + r) / 2;
		if (pos <= mid) {
			update(id * 2, l, mid, pos, val);
		}
		else {
			update(id * 2 + 1, mid + 1, r, pos, val);
		}
		vector <kien> tp;
		tp.push_back(st[id * 2].first);
		tp.push_back(st[id * 2].second);
		tp.push_back(st[id * 2 + 1].first);
		tp.push_back(st[id * 2 + 1].second);
		sort(tp.rbegin(), tp.rend());
		st[id].first = tp[0];
		st[id].second = tp[1];
	}
}

pair<kien, kien> get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) return {-1, -1}; // ngoài đoạn
    if (u <= l && r <= v) return st[id]; // nằm trọn đoạn
    int mid = (l + r) / 2;
    auto left = get(id * 2, l, mid, u, v);
    auto right = get(id * 2 + 1, mid + 1, r, u, v);
    vector<kien> tp;
    tp.push_back(left.first);
    tp.push_back(left.second);
    tp.push_back(right.first);
    tp.push_back(right.second);
    sort(tp.rbegin(), tp.rend());
    return {tp[0], tp[1]};
}


JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    kien q;
    build(1, 1 ,n);
    cin >> q;
    int dau, cuoi, pi, px;
    while (q--) {
    	cin >> c;
    	if (c == 'U') {
    		cin >> pi >> px;
    		update (1 , 1, n , pi, px);
    	}
    	else {
    		cin >> dau >> cuoi;
    		pair <kien , kien> ans = get(1, 1, n, dau, cuoi);
    		cout << ans.first + ans.second << "\n";
    	}
    }
}
    