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
int n, p, l = 0, r = 0, a;
int f[Million + 5][25]; 
int dp[Million + 5][25]; 
int vtr[Million + 5];     

int tknp(int i, int f_cmp)
{
    int l = 0, r = vtr[i] - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (f[i][mid] <= f_cmp)
            r = mid - 1;
        else
            l = mid + 1;
    }

    ++r;
    if (r == vtr[i])
        return n;
    return dp[i][r];
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> p;
    cin >> a;
    f[1][0] = a;
    dp[1][0] = 1;
    vtr[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        cin >> a;
        vtr[i] = vtr[i - 1];
        for (int j = 0; j < vtr[i]; ++j)
        {
            f[i][j] = f[i - 1][j];
            dp[i][j] = dp[i - 1][j];
        }

        if (a > p)
        {
            int t = tknp(i, a - p);
            if (r - l < i - t)
            {
                l = t;
                r = i;
            }
        }
        if (a < f[i][vtr[i] - 1])
        {
            f[i][vtr[i]] = a;
            dp[i][vtr[i]] = i;
            vtr[i]++;
        }
    }

    if (l != 0)
    {
        cout << r - l;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
