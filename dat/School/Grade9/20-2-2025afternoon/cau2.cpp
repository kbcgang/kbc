/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int q;
ll n;
vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23,29,31,37};
ll product(ll a, ll b, ll c)
{
    ll x = 0;
    while (b > 0)
    {
        if (b & 1)
            x = (x + a) % c;
        a = 2 * a % c;
        b /= 2;
    }
    return x;
}
ll luythua(ll a, ll b, ll c)
{
    ll x = 1;
    while (b > 0)
    {
        if (b & 1)
            if (x > sqrt(2e18) && a > sqrt(2e18))
                x = product(x, a, c);
            else
                x = x * a % c;
        if (a > sqrt(2e18))
            a = product(a, a, c);
        else
            a = a * a % c;
        b /= 2;
    }
    return x;
}
bool test(ll a, ll m, int k, ll n)
{
    ll x = luythua(a, m, n);
    if (x == 1 || x == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        if (x > sqrt(2e18))
            x = product(x, x, n);
        else
            x = x * x % n;
        if (x == n - 1)
            return 1;
        if (x == 1)
            return 0;
    }
    return 0;
}
bool MillerRabin(ll n)
{
    for (auto a : prime)
        if (a == n)
            return 1;
    if (n < 41)
        return 0;
    int k = 0;
    ll m = n - 1;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for (auto a : prime)
        if (!test(a, m, k, n))
            return 0;
    return 1;
}
void KBCGPT()
{
    if(MillerRabin(n)){cout<<"NO\n";return;}
    ll s = 1, m = n;
    for (ll i = 2; i <= sqrt(n); i++)
        if(n%i==0)
        {
            s*=i;
            while(n%i==0) n/=i;
        }
    if(n>1)s*=n;
    if (s < m)
        cout << "YES\n";
    else
        cout << "NO\n";
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
    cin >> q;
    while (q--)
    {
        cin >> n;
        KBCGPT();
    }
}