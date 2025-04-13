/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n;
vector<ll> prime = {2, 3, 5, 7, 11};
ll luythua(ll a, ll b, ll n)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % n;
        a = a * a % n;
        b /= 2;
    }
    return res;
}
bool test(ll a, ll m, ll k, ll n)
{
    ll t = luythua(a, m, n);
    if (t == 1 || t == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        t = t * t % n;
        if (t == n - 1)
            return 1;
        if (t == 1)
            return 0;
    }
    return 0;
}
bool RabinMiller(ll n)
{
    for (auto a : prime)
        if (a == n)
            return 1;
    if (n < 11)
        return 0;
    ll k = 0, m = n - 1;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for (auto a : prime)
        if (test(a, m, k, n) == 0)
            return 0;
    return 1;
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
    cin >> n;
    for (ll i = sqrt(n);; i++)
        if (RabinMiller(i))
        {
            cout << i * i;
            exit(0);
        }
}