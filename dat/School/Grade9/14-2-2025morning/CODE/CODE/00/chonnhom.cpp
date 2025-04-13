#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
const int MOD = 1e9 + 7;
int n, k, cnt = 0;
long long ckn[N][N], dp[N][N];
string s[N], ns[N];
map<string, int> mp;
void build()
{
  int k;
  for (int i = 0; i < N; i++)
  {
    ckn[i][0] = ckn[i][i] = 1;
    k = i >> 1;
    for (int j = 1; j < k + 1; j++)
      ckn[i][j] = ckn[i][i - j] = (ckn[i - 1][j] + ckn[i - 1][j - 1]) % MOD;
  }
}
int main()
{
  // freopen("chonnhom.inp", "r", stdin);
  // freopen("chonnhom.out", "w", stdout);
  build();
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
  {
    cin >> s[i];
    sort(s[i].begin(), s[i].end());
    if (mp.find(s[i]) == mp.end())
    {
      cnt++;
      ns[cnt] = s[i];
    }
    mp[s[i]]++;
  }
  // cout<<mp.end();
  dp[0][0] = 1;
  for (int i = 1; i <= cnt; i++)
  {
    
    int amount = mp[ns[i]];
    for (int j = 0; j <= k; j++)
    {
      for (int l = 0; l <= amount; l++)
      {
        if (j < l * (l - 1) / 2)
          continue;
        dp[i][j] += dp[i - 1][j - l * (l - 1) / 2] * ckn[amount][l] % MOD;
        dp[i][j] %= MOD;
      }
    }
  }
  // cout << dp[cnt][k];
}