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
kien n,k,m,sum,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n >> l>> r;
        for (kien i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort (a + 1, a + 1 + n);
        maxx = sum - r;
        minn = sum - l;
        int i = 1, j = 2;
        while (j <= n or i < j)
        {
            vtr = a[i] + a[j];
            if (vtr >= minn and vtr <= maxx)
            {
                ans++;
                i++;
                j++;
            }
            else if (vtr < minn)
            {
                j++;
            }
            else if (vtr > maxx)
            {
                i++;
            }
        }
        cout << ans << endl;
        ans = 0;
        sum = 0;
    }
}