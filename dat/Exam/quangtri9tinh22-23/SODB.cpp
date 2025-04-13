/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
bool dem(long long n)
{
    int odd = 0, even = 0;
    while (n > 0)
    {
        int m = (n % 10) % 2;
        if (m == 1)
            odd++;
        else
            even++;
        n /= 10;
    }
    return odd != even;
}
bool snt[10000005];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
}
long long n, a[2000005];
long long product(long long a, long long b, long long n)
{
    a %= n;
    long long ans = 0;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans + a) % n;
        a = (2 * a) % n;
        b /= 2;
    }
    return ans;
}
bool luythua(long long a, long long m, long long k, long long n)
{
    long long ans = 1;
    a %= n;
    while (m > 0)
    {
        if (m & 1)
            ans = product(ans, a, n) % n;
        a = product(a, a, n) % n;
        m /= 2;
    }
    if (ans == 1 || ans == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        ans = product(ans, ans, n) % n;
        if (ans == 1)
            return 0;
        if (ans == n - 1)
            return 1;
    }
    return 0;
}
vector<long long> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
bool RabinMiller(long long n)
{
    for (auto i : prime)
        if (n == i)
            return 1;
    if (n < 41)
        return 0;
    long long k = 0, m = n - 1;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for (auto a : prime)
        if (luythua(a, m, k, n) == 0)
            return 0;
    return 1;
}
int ans;
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
    make_sieve();
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // if(RabinMiller(a[0]))
    //     cout<<1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1)
        {
            if (a[i] <= 1e7)
            {
                if (snt[a[i]] == 0)
                    ans += dem(a[i]);
            }
            else
            {
                // cout << 1;
                if (RabinMiller(a[i]) == 1)
                    ans += dem(a[i]);
            }
        }
    }
    cout << ans;
}