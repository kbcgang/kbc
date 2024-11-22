/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, t[25];
long long Max;
int m=1000;
long long s, ans;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        m = min(t[i], m);
    }
    Max = m * s;
    long long dau = 0, cuoi = Max;
    while (dau <= cuoi)
    {
        long long giua = (dau + cuoi) / 2;
        long long dem = 0;
        for (int i = 0; i < n; i++)
            dem += giua / t[i];
        if (dem >= s)
        {
            cuoi = giua - 1;
            ans = giua;
        }
        else
            dau = giua + 1;
    }
    cout << ans;
}