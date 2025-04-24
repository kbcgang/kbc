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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

bool check(int s, int n) {
  for (int i = n - 1; i >= 0; i--) {
    if (((s >> i) & 1) == 1 and (s >> (i - 1) & 1) == 1) {
      return false;
    }
  }
  return true;
}

JAV() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> n;
  for (int i = 0; i < (1 << n); i++) {
    if (check(i, n)) {
      for (int j = n - 1; j >= 0; j--) {
        if ((i >> j) & 1 == 1) {
          cout << 'B';
        } else {
          cout << 'A';
        }
      }
      cout << "\n";
    }
  }
}
