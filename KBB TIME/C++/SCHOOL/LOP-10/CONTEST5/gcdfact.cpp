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
const int MAXN = 100000 + 5;
int t, n;
kien a[MAXN], ans;
kien g;   
kien mn;  

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
    	cin >> n;
    	for (int i = 1; i <= n; i++) {
    		cin >> a[i];
    		if (a[i] == 1) {
    			ans = 1;
    		}
    	}
    	if (ans == 1) {
    		ans = 0;
    		cout << "YES\n";
    		continue;
    	}
    	g = a[1];
    	for (int i = 2; i <= n; i++) {
    		g = __gcd(g, a[i]);
    	}
    	mn = *min_element(a + 1, a + 1 + n);
    	if (g == mn) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
    	}
    }
}
