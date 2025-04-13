/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, q;
int a[100005], b[100005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int z = lower_bound(b, b + n, (a[x - 1] + a[y - 1]) / 2) - b;
        int t = max(abs(a[x - 1] - b[z]), abs(a[y - 1] - b[z]));
        if (z > 0)
            cout << min(t, max(abs(a[x - 1] - b[z - 1]), abs(a[y - 1] - b[z - 1]))) << '\n';
        else
            cout << t << "\n";
    }
}