#include <bits/stdc++.h>
#define booster              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
const long long mod = 1e9 + 7;
vector<bool> nt(10000007);
void sieve()
{
    nt[0] = nt[1] = 1;
    for (long long i = 2; i * i <= 10000000; i++)
        if (!nt[i])
            for (long long j = i * i; j <= 10000000; j += i)
                nt[j] = 1;
}
int main()
{
    booster;
    sieve();
    long long l, r, d = 1, res = 0;
    cin >> l >> r;
    for (long long i = l; i <= r; i++)
        if (!nt[i])
        {
            res += (d % mod * i % mod) % mod;
            d++;
        }
    cout << res;
}
