/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, m;
string a, b;
int k;
int sub[1005][1005];
int ans = -1, res[1005][1005];
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
    cin >> a >> b;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                sub[i][j] = sub[i - 1][j - 1] + 1;
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << sub[i][j] << " ";
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            res[i][j] = max(res[i][j-1],res[i-sub[i][j]][j-sub[i][j]]+sub[i][j]);
            ans = max(ans, res[i][j]);
        }
    if (ans <k)
        cout << -1;
    else
        cout << ans;
}