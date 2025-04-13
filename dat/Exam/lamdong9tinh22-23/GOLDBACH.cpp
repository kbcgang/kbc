/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
#define ErasLimit 10000005
bool snt[ErasLimit];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(ErasLimit); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= ErasLimit; j += i)
                snt[j] = 1;
}
ll tich(ll a, ll b, ll n)
{
    ll res = 0;
    while (b > 0)
    {
        if (b & 1)
            res = (res + a) % n;
        a = 2 * a % n;
        b /= 2;
    }
    return res;
}
ll luythua(ll a, ll b, ll n)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = tich(res, a, n);
        a = tich(a, a, n);
        b /= 2;
    }
    return res;
}
bool test(ll a, ll m, int k, ll n)
{
    ll res = luythua(a, m, n);
    if (res == 1 || res == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        res = tich(res, res, n);
        if (res == 1)
            return 0;
        if (res == n - 1)
            return 1;
    }
    return 0;
}
vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23};
bool MillerRabin(ll n)
{
    for (auto a : prime)
        if (n == a)
            return 1;
    if (n < 29)
        return 0;
    ll m = n - 1;
    int k = 0;
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
    make_sieve();int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(int i=3;i<=1e7;i++)
            if(snt[i]==0)if(MillerRabin(n-i)){cout<<i<<" "<<n-i<<"\n";break;}
    }
}