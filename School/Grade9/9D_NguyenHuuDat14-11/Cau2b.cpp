/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
void check()
{
    long ans = 0;
    for (int i = 1; i <= n; i++)
        if (i % 5 != 0 && i % 5 != 3)
            ans += i;
    cout << ans << "\n";
}
kien()
{
    if (fopen("Cau2b.inp", "r"))
    {
        freopen("Cau2b.inp", "r", stdin);
        freopen("Cau2b.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    // check();
    long long sum = n * (n + 1) / 2;
    if (n < 3)
    {
        cout << sum;
        exit(0);
    }
    else
    {
        long long l = 1, r = n;
        while (r % 5 != 0)
            r--;
        while (l % 5 != 0)
            l++;
        long long ssh = (r - l) / 5 + 1;
        long long mod5 = ssh * (r + l) / 2;
        l = 1, r = n;
        while (r % 5 != 3)
            r--;
        while (l % 5 != 3)
            l++;
        ssh = (r - l) / 5 + 1;
        long long mod53 = ssh * (l + r) / 2;
        cout << sum - mod5 - mod53;
    }
}