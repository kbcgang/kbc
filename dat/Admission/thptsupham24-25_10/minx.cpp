/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t;
ll a, b, c;
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
        cin >> a >> b >> c;
        ll x = (a / __gcd(a, b) * b )/ a;
        ll y = (b / __gcd(b, c) * c )/ b;
        ll z =( c / __gcd(a, c) * a) / c;
        cout <<x*y*z<< "\n";
    }
}