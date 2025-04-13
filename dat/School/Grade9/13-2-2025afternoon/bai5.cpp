/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, m;
struct shop
{
    int open;
    int close;
};
shop a[100005];
int k;
bool cmp(shop a, shop b)
{
    if (a.open == b.open)
        return a.close < b.close;
    return a.open < b.open;
}
int cnp()
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m].open > k)
            r = m - 1;
        else if (a[m].open <= k)
            l = m + 1;
    }
    return l - 1;
}
void ChatGPT()
{
    int pos = cnp();
    if (k >= a[pos].open && k < a[pos].close)
        cout << 0 << "\n";
    else if (pos == n - 1)
        cout << -1 << "\n";
    else
        cout << a[pos + 1].open - k << "\n";
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i].open >> a[i].close;
    sort(a, a + n, cmp);
    while (m--)
    {
        cin >> k;
        ChatGPT();
    }
}