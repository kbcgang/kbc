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
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;
kien a[Million], f[Million];
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    int i = 1, j = 1;
    while (j <= n)
    {
        if (f[j] - f[i - 1] <= k)
        {
            j++;
        }
        else
        {
            j--;
            ans += (j - i) * (j - i + 1) / 2 + (j - i  + 1);
            i++;
        }
    }
    cout << ans;
}