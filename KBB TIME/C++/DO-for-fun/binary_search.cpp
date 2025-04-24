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
kien cars, minn = INT_MAX;

bool ktr(int mid)
{
  int sovle = 0;
  for (int i = 1; i <= n; i++)
  {
    sovle += int(sqrt(mid / a[i]));
    if (sovle >= cars)
    {
      return true;
    }
  }
  if (sovle >= cars)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int tknp(int minn)
{
  int l = 1, r = n * n * minn;
  int mid, kq = -1;
  while (l <= r)
  {
    mid = (l + r) / 2;
    if (ktr(mid))
    {
      kq = mid;
      r = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }
  return kq;
}

JAV()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    minn = min(minn, a[i]);
  }
  cin >> cars;
  cout << tknp(minn);
}
