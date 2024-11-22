/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
long long x, y;
long long ans;
void subtask1()
{
    while (x % 3 != 0)
        x++;
    while (y % 3 != 0)
        y--;
    for (int i = x; i <= y; i += 3)
        ans += i;
    cout << ans << "\n";
}
void subtask2()
{
    while (x % 3 != 0)
        x++;
    while (y % 3 != 0)
        y--;
    if (y / x < 0)
    {
        long long sumneg = (abs(x / 3) + 1) * x / 2;
        long long sumpos = (y * (y / 3 + 1)) / 2;
        cout << (sumneg + sumpos);
    }
    else
    {
        long long ssh = (y - x) / 3 + 1;
        cout << ssh * (y + x) / 2;
    }
}
main()
{
    if (fopen("SD3.inp", "r"))
    {
        freopen("SD3.inp", "r", stdin);
        freopen("SD3.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> y;
    if (abs(y - x) <= 1e7)
        subtask1();
    else
        subtask2();
}
