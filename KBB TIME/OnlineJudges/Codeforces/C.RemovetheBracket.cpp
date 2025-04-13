/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t;
int n, a[200005], s;
ll f[2][200005];

struct pairs
{
    ll x;
    ll y;
};

pairs b[200005];

void ChatGPT(int i)
{
    b[i].x = 0, b[i].y = a[i];
    if (b[i].y > s && b[i].x < s)
    {
        b[i].y -= s;
        b[i].x = s;
    }
}

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
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        b[1].x = b[1].y = a[1];
        b[n].x = b[n].y = a[n];
        for (int i = 2; i < n; i++)
            ChatGPT(i);
        f[0][1] = f[1][1] = 0;
        for (int i = 2; i <= n; i++)
        {
            f[0][i] = min(f[0][i - 1] + b[i - 1].y * b[i].x, f[1][i - 1] + b[i - 1].x * b[i].x);
            f[1][i] = min(f[0][i - 1] + b[i - 1].y * b[i].y, f[1][i - 1] + b[i - 1].x * b[i].y);
        }
        cout << min(f[0][n], f[1][n]) << "\n";
    }
}