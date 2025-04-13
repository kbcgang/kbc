/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll a, b;
int luythua(ll a, ll b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % 100;
        a = a * a % 100;
        b /= 2;
    }
    return res;
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
    cin >> a >> b;
    ll n = a, m = b;
    a %= 100;
    b %= 100;
    a = luythua(a, m);
    b = luythua(b, n);
    if ((a + b)%100 < 10)
        cout << 0 << (a + b)%100;
    else
        cout << (a + b) % 100;
}