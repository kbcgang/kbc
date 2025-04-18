///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, dp[Million];
kien maxx,minn, vtr,ans,l,r;
string s;

int tknp(int x, int k)
{
    int l = 0, r = m - 1;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (dp[mid] - x >= k)
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
    cin >> n >> k;
    cin >> s;
    m = s.size();
    dp[0] = s[0];
    for (int i = 1; i < m; i++)
    {
        dp[i] = dp[i-1] + s[i];
    }
    dem = tknp(0, k);
    if (dem != -1)
    {
        ans += (m - dem);
    }
    for (int i = 1; i < m; i++)
    {
        dem = tknp(dp[i-1], k);
        if (dem != -1)
        {
            ans += (m - dem);
        }
    }
    cout << ans;
    
}