/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, m, k, a[100005];
ll s;
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
    cin >> n >> m >> k;
    int container = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
        if (s + a[i] <= m)
        {
            s += a[i];
            if (i == k - 1)
            {
                cout << 0;
                exit(0);
            }
            container++;
        }
        else break;
    sort(a, a + container - 1, greater<int>());
    for (int i = 0; i < container; i++)
    {
        s -= a[i];
        ans++;
        if (s + a[k-1] <= m)
        {
            cout << ans;
            exit(0);
        }
    }
}