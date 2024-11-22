/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
bool snt[2000005];
int n, a[10005];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i * i <= 2 * 1e6; i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 2 * 1e6; j += i)
                snt[j] = 1;
}
bool check(int n)
{
    if (n < 13)
        return 0;
    while (n >0)
    {
        int dv = n % 10;
        int hc = (n / 10) % 10;
        if (hc >= dv)
            return 0;
        n /= 10;
    }
    return 1;
}
int ans;

kien()
{
    if (fopen("BAI04.inp", "r"))
    {
        freopen("BAI04.inp", "r", stdin);
        freopen("BAI04.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (snt[a[i]] == 0)
            ans += check(a[i]);
    cout << ans;
}