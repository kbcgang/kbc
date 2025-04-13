/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long a, b;
void times_of_spin(long long a, long long b)
{
    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }
    long long ans;
    // if (a > b)
    //     ans = a - b;
    ans=(b+a-1)/a;
    ans=ans*a-b;
    for (long long i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            long long n = (b + i - 1) / i;
            ans = min(ans, i * n - b);
            n = (b + (a / i) - 1) / (a / i);
            ans = min(ans, (a / i) * n - b);
        }
    }
    cout << ans << "\n";
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
    while (n--)
    {
        cin >> a >> b;
        times_of_spin(a, b);
    }
}