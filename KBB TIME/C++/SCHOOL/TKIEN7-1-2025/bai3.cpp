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
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i  = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ans = a[1];
    sort(a + 2, a + 1 + n, greater<kien>());
    for (int i = 2; i <= n; i++)
    {
        
        if (k > 0)
        {
            ans += a[i];
            k--;
        }
        else
        {
            ans -= a[i];
        }
    }
    cout << ans;
}