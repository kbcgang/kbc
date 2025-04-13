#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("xaucon.inp", "r", stdin);
  freopen("xaucon.out", "w", stdout);
  string s;
  cin >> s;
  s.push_back('1');
  int res = 0;
  int cnt = 0;
  for (char ch : s) {
    if (ch == '0')
      cnt++;
    else {
      res = max(res, cnt);
      cnt = 0;
    }
  }
  cout << res;
}