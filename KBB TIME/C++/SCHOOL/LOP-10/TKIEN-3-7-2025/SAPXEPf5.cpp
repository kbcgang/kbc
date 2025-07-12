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
kien n, k, m, dem;
kien maxx, minn, vtr, ans;
double f[Million + 5], a[1000000];

bool ktr(double R) {
    int time = 0;
    int i = 0;             
    while (i < n && time < k) {
        int j = upper_bound(f + i, f + n, f[i] + R) - f - 1;
        double range = f[j] + R;
        i = upper_bound(f + i, f + n, range) - f;
        time++;
    }
    return i >= n;
}

void tknp() {
	double l = 0, r = f[n-1], mid = 1e-5;
	while (r - l > mid) {
	    double mid = (l + r) / 2;
	    if (ktr(mid)) r = mid;
	    else l = mid;
	}
	cout << fixed << setprecision(4) << r;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i < n; i++) {
    	cin >> a[i];
    	maxx += a[i];
    	f[i] = f[i - 1] + a[i];
    }
    tknp();
}
    