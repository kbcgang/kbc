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
kien n, m;
kien a[Million + 5];
kien f[Million + 5];
kien ans[Million + 5];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> f[i];
        ans[i] = -1;
    }
    kien sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += a[i];
        for(int j = 1; j <= m; j++)
        {
            if(ans[j] == -1 && sum >= f[j])
            {
                ans[j] = i;
            }
        }
    }
    for(int i = 1; i <= m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
