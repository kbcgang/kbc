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
kien vtr, ans, l, r, dp[1000000];
kien minn[Million][20];
kien maxx[Million][20];
int lg[Million];

int getMin(int l, int r) {
    int k = lg[r - l + 1];
    return min(minn[l][k], minn[r - (1 << k) + 1][k]);
}

int getMax(int l, int r) {
    int k = lg[r - l + 1];
    return max(maxx[l][k], maxx[r - (1 << k) + 1][k]);
}

int maxxL(int i) {
    int l = 1, r = i - 1, res = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (getMax(mid, i - 1) > a[i]) {
            res = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    return res;
}

int maxxR(int i) {
    int l = i + 1, r = n, res = n + 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (getMax(i + 1, mid) > a[i]) {
            res = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    return res;
}

int minnL(int i) {
    int l = 1, r = i - 1, res = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (getMin(mid, i - 1) < a[i]) {
            res = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    return res;
}

int minnR(int i) {
    int l = i + 1, r = n, res = n + 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (getMin(i + 1, mid) < a[i]) {
            res = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
   	for (int i = 1; i <= n; i++) {
   		cin >> a[i];
   		minn[i][0] = a[i];
   		maxx[i][0] = a[i];
   	}
   	for (int i = 1; (1 << i) <= n; i++) {
   		for (int j = 1; j + (1 << i) - 1 <= n; j++) {
   			minn[j][i] = min(minn[j][i - 1], minn[j + (1 << (i - 1))][i - 1]);
   			maxx[j][i] = max(maxx[j][i - 1], maxx[j + (1 << (i - 1))][i - 1]);
   		}
   	}
   	for (int i = 1; i <= n; i++) {
        ans += 1LL * a[i] * (i - maxxL(i)) * (maxxR(i) - i);
        ans -= 1LL * a[i] * (i - minnL(i)) * (minnR(i) - i);
    }

    cout << ans << '\n';
}

     