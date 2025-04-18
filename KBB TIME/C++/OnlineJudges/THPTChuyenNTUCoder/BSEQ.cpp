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
int n,k,m,dem, a[1000000], f[Million];
int maxx,minn, vtr,ans,l,r, dp[1000000];

int tknp(int vtr ,int x, int K)
{
    int l = vtr, r = n, res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (f[mid] - x == K)
        {
            res = mid;
            return res;
        }
        if (f[mid] - x < K)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
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
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i;  j <= n; j++)
        {
            if (f[j] - f[i-1] > f[n] / 2)
            {
                break;
            }
            dem = tknp(j, f[j], f[j] - f[i - 1]);
            if (dem != -1)
            {
                dp[i] = max(dp[i], dem - i + 1);
                maxx = max(maxx, dp[i]);
            }
        }
    }
    cout << maxx;
}
