/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, m;
vector<ll> uoc;
void sub1()
{
    n = n * m;
    for (ll i = sqrt(n);; i--)
    {
        if (n % i == 0 && i % m == 0 && (n / i) % m == 0)
        {
            cout << i + n / i;
            exit(0);
        }
    }
}
void sub3()
{
    ll ans = inf;
    for (ll i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            uoc.push_back(i);
            if (i * i != n)
                uoc.push_back(n / i);
        }
    // sort(uoc.begin(), uoc.end());
    for (auto i : uoc)
        if (i % m == 0)
            for (auto j : uoc)
                if (__gcd(i, j) == m && i / m * j == n)
                    ans = min(ans, j + i);
    cout << ans;
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
    cin >> m >> n;
    if (n % m != 0)
    {
        cout << -1;
        exit(0);
    }
    if (n == m)
    {
        cout << 2 * n;
        exit(0);
    }
    sub3();
}