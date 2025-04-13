/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k, t;
string s;
ll ans;
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
    cin >> n >> k >> s;
    int l = 0, r = -1;
    while (r <= n)
    {
        if (t >= k)
        {
            ans += n - r;
            t -= s[l];
            l++;
        }
        else
        {
            r++;
            t += s[r];
        }
    }
    cout << ans;
}