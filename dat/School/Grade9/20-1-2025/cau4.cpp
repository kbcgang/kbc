/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[100005], m, ans;
int ChatGPT()
{
    int l = 1, r = *max_element(a, a + m);
    while (l <= r)
    {
        int mid = (l + r) / 2;
        ll kids = 0;
        for (int i = 0; i < m; i++)
            kids += a[i] / mid;
        if (kids >= n)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return r+1;
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
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int res = ChatGPT();
    cout << res;
}