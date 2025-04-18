#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define sigma 10000005

using namespace std;
int n, a[sigma], d;
int tu(int n)
{
    int tong = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            tong += i + n / i;
            if (n == i * i)
                tong -= i;
        }
    }
    return tong - n;
}
int tcs(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int x, i = 1; i <= n; i++)
    {
        cin >> x;
        x = tcs(x);
        if (tu(x) == x)
        {
            d++;
        }
    }
    cout << d;
}