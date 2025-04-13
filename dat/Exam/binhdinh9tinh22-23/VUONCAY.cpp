/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int m, n;
int a[1000][1000];
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
    cin >> m >> n;
    int ans = 2 * m + 2 * n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 1; i < n; i++)
        if (a[0][i] != a[0][i - 1])
            ans++;
    // for(int i=1;i<n;i++)
    //     if(a[m-1][i]!=a[m-1][i-1])
    //         ans++;
    for (int i = 1; i < m; i++)
        if (a[i][0] != a[i - 1][0])
            ans++;
    // for(int i=1;i<m;i++)
    //     if(a[i][n-1]!=a[i-1][n-1])
    //         ans++;
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
        {
            if (a[i][j] != a[i - 1][j])
                ans++;
            if (a[i][j] != a[i][j - 1])
                ans++;
        }
    cout << ans;
}