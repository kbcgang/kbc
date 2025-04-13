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
int l, r;
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
    make_sieve();
    cin >> l >> r;
    ll s = 1;
    for (ll i = l; i <= r; i++)
        if (snt[i] == 0)
        {
            ans += (s % mod)*(i%mod)%mod;
            s++;
        }
    cout << ans;
}