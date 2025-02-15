///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans = ((ans * 10) % MOD +  (s[j] - '0')) % MOD;
        }
        ans %= MOD;
        dem += ans;
        ans = 0;
    }
    cout << dem;
}