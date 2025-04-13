/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#include <cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, t, a, b, k[200005];
ll s, ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> t >> a >> b;
    for (int i = 1; i <= n; i++)
        cin >> k[i];
    for (int i = 0; i <= n; i++)
    {
        s = 0;
        for (int j = i + 1, time = i * b + a; time <= t && j <= n; j++, time += a)
            s += k[j];
        ans = max(ans, s);
    }
    cout << ans;
}