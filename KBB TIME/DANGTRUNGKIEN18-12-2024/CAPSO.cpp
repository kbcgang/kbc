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
kien n,s,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r;
unordered_map <int, int> f;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    for (int i = 1; i <= n; i++)   
    {
        if (f[s - a[i]] > 0 and f[a[i]] > 0)
        {
            ans += min(f[s - a[i]] , f[a[i]]);
            f[a[i]]--;
        }
    }
    cout << ans;
}