/// Hãy làm Sư tử, đừng làm Nai.
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
kien n, k, t, m, dem, f[Million + 5], a[1000000];
kien u, v, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, s1;
    cin >> s >> s1;
    cin >> t;
    while (t--) {
        cin >> u >> v;
        if (u == 1) {
            if (s[v - 1] == s1[v-1]) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            if (s[v - 1] == s1[s.size() - v]) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    
}
