/// A game is our childhood
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
kien()
{
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
            sub[i][j] = max({sub[i][j - 1], sub[i][j], sub[i - 1][j]});
        }
    if (sub[n][m] >= k)
        cout << sub[n][m];
    else
        cout << -1;
}