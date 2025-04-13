/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a, b;
int n, m;
int res[2505][2505], ans;
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
    cin >> n >> m;
    cin >> a;
    cin >> b;
    n=a.size();m=b.size();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                res[i][j] = res[i - 1][j - 1] + 1;
            else
                res[i][j] = max(res[i][j-1],res[i - 1][j]);
            // ans = max(ans, res[i][j]);
        }
    cout << res[n][m];
}