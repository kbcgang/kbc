/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int t;
long long x, y, z, n;
void sex(long long &number, long long &limit)
{
    while (n > 1)
    {
        number *= 10;
        n--;
    }
    limit = number * 10 - 1;
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
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z >> n;
        long long xy = x / __gcd(x, y) * y;
        long long xyz = xy / __gcd(xy, z) * z;
        long long number = 1, limit = 9;
        sex(number, limit);
        long long modxyz = (number + xyz - 1) / xyz;
        modxyz *= xyz;
        if ((modxyz > limit))
            cout << -1 << "\n";
        else
            cout << modxyz << "\n";
    }
}