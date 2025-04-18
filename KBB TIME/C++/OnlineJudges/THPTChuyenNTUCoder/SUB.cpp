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
int n,k,m,dem, a[100005];
int maxx,minn, vtr,ans = INT_MIN,l,r, dp[100005], sum;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            dp[i] = dp[i-1] + a[i];
            if (a[i] > 0)
            {
                sum += a[i];
                dem++;
            }
        }
        if (dem == 0)
        {
            cout << *max_element(a + 1, a + 1 + n) << " ";
        }
        else
        cout << sum << " ";
        for (int i = 1; i <= n; i++)
        {
            minn = min(minn, dp[i-1]);
            ans = max(ans, dp[i] - minn);
        }
        cout << ans << "\n";
        ans = INT_MIN;
        sum = 0;
        minn = 0;
        dem = 0;
    }
}
