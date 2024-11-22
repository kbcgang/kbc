/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
bool snt[10000005];
int a, b, ans;
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i * i <= 1e7; i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
}
int rev(int n)
{
    int s = 0;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}
kien()
{
    if (fopen("BAI02.inp", "r"))
    {
        freopen("BAI02.inp", "r", stdin);
        freopen("BAI02.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    make_sieve();
    for (int i = a; i <= b; i++)
        if (snt[i] == 0 && snt[rev(i)] == 0)
        {
            ans++;
            // cout<<i<<" "<<rev(i)<<"\n";
        }
    cout << ans;
}