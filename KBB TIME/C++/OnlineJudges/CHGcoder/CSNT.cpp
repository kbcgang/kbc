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
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r;
unordered_map<char, int> pp;

JAV() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '2' or s[i] == '3' or s[i] == '5' or s[i] == '7') {
      pp[s[i]]++;
      if (pp[s[i]] == 1) {
        cout << s[i] << " ";
      }
    }
  }
}
