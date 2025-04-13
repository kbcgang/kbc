/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int l, r, ans;
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
    cin >> l >> r;
    for (int i = l+1; i <= r; i++)
    {
        if (i <= 12)
            if (i - l > 4)
                ans += 3;
            else
                ans += 6;
        if (i > 12)
            if (i - l > 4)
                ans += 5;
            else
                ans += 10;
    }
    cout << ans;
}