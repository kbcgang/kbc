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
kien maxx, minn, vtr, ans, l, r, dp[1000000];
char c;

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
    	cin >> c;
    	a[i] = c;
    }
    kien q;
    cin >> q;
    string s;
    while (q--) {
    	cin >> s;
    	vtr = 0;
    	for (int i = 0; i < s.size(); i++) {                                         
    		for (int j = 1; j <= t; j++) {                                           
    			if (s[i] == a[j]) {                                                  
    				for (int k = i - 1; k >= vtr; k--) {                             
    					cout << s[k];                                                
    				}                                                                
    				vtr = i + 1;
    				break;
    			}
    		}
    	}
    	for (int i = s.size() - 1; i >= vtr; i--) {
    		cout << s[i];
    	}
    	cout << "\n";
    }
}
    