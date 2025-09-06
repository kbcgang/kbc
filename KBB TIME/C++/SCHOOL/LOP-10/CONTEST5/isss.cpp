/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
const int MAXN = 200005;
int n, m, a[MAXN], val[MAXN];
kien w[MAXN], bit[MAXN], ans;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
    	cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
    	cin >> w[i];
    }
    for (int i = 1; i <= n; ++i) 
    	val[i] = a[i];
    sort(val + 1, val + n + 1);
    m = 0;
    for (int i = 1; i <= n; ++i) {
        if (i == 1 or val[i] != val[i-1]) {
            ++m;
            val[m] = val[i];
        }
    }
    for (int i = 1; i <= m; ++i) {
    	bit[i] = 0;
    }
    ans = 0;
    for (int i = 1; i <= n; ++i) {
        int idx = int(lower_bound(val + 1, val + m + 1, a[i]) - val); 
        int j = idx - 1;
        kien kq = 0;
        while (j > 0) {         
            if (bit[j] > kq) kq = bit[j];
            j -= j & -j;
        }
        kien cur = kq + w[i];
        if (cur > ans) ans = cur;
        int k = idx;
        while (k <= m) {
            if (cur > bit[k]) {
            	bit[k] = cur;	
            } 
            k += k & -k;
        }
    }
    cout << ans << '\n';
}
