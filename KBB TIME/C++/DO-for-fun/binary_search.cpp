#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define JAV main
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define pb push_back

ll kq(vector<pii> &p)
{
  if (p.size() <= 1)
    return 0;
  vector<ll> a, b;
  for (int i = 0; i < p.size(); ++i)
  {
    int x = p[i].first, y = p[i].second;
    a.pb(x + y);
    b.pb(x - y);
  }
  auto f = [](vector<ll> &v)
  {
    sort(all(v));
    ll res = 0, pre = 0;
    for (int i = 0; i < v.size(); ++i)
      res += v[i] * i - pre, pre += v[i];
    return res;
  };
  return (f(a) + f(b)) / 2;
}

JAV()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int m, n;
  cin >> m >> n;
  vector<pii> M, S;
  for (int i = 0; i < m; ++i)
  {
    string s;
    cin >> s;
    for (int j = 0; j < n; ++j)
    {
      if (s[j] == 'M')
        M.pb({i, j});
      else if (s[j] == 'S')
        S.pb({i, j});
    }
  }
  cout << kq(M) << " " << kq(S);
}
