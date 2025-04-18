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
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            dp[i] = dp[i-1] - 1;
        }
        else
        {
            dp[i] = dp[i-1] + 1;
        }
    }
    for (int i = n + 1; i <= n + k; i++)
    {
        dp[i] = dp[n];
    }
    for (int i = 1; i <= n; i++)
    {
        if (ans < (dp[i + k] - dp[i - 1]))
        {
            ans = dp[i + k] - dp[i - 1];
            l = i;
        }
    }
    for (int i = l; i <= l + k; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
        }
        if (a[i] == 1)
        {
            a[i] = 0;
        }
    }
    for ()
}
