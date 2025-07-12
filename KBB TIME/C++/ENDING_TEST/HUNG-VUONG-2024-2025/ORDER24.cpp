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
kien n, k;
kien a[1005];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n and k > 0; i++) {
        int lim = min((kien)n, i + k);
        int kq = i;
        for (int j = i + 1; j <= lim; j++) {
            if (a[j] < a[kq]) {
                kq = j;
            }
        }
        kien dist = kq - i;
        if (dist > 0) {
            k -= dist;
            for (int j = kq; j > i; j--) {
                swap(a[j], a[j-1]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
    	cout << a[i];
    	if (i < n) {
      	  cout << ' ';
    	} else {
        	cout << '\n';
    	}
	}
    return 0;
}
