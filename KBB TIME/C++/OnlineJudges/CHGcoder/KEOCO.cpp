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
const int maxn = 100;
const int maxkl = 500;
const int maxx = maxn * maxkl;
bitset<maxx + 1> dp[maxn + 1];
int n, sum, minn, g1, nho, lon;

JAV()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[maxn];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        int kl = a[i];
        for (int slm = n; slm >= 1; --slm)
        {
            dp[slm] |= (dp[slm - 1] << kl);
        }
    }
    minn = maxx + 1;
    g1 = 0;
    nho = n / 2;
    lon = (n + 1) / 2;
    for (int i = 0; i <= sum / 2; i++)
    {
        bool ktr = false;
        if (n % 2 == 0)
        {
            if (dp[nho][i])
                ktr = true;
        }
        else
        {
            if (dp[nho][i] || dp[lon][i])
                ktr = true;
        }
        if (ktr)
        {
            int hieu = abs(i - (sum - i));
            if (hieu < minn)
            {
                minn = hieu;
                g1 = i;
            }
        }
    }
    int g2 = sum - g1;
    if (g1 > g2)
        swap(g1, g2);
    cout << g1 << " " << g2 << "\n";
    return 0;
}
