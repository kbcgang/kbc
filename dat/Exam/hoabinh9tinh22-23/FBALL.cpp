/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int p, q, r, s, u, v;
int a, b, c;
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
    cin >> p >> q >> r >> s >> u >> v;
    if (p == q)
    {
        a++;
        b++;
    }
    else if (p > q)
        a += 3;
    else
        b += 3;
    if (r == s)
    {
        a++;
        c++;
    }
    else if (r > s)
        a += 3;
    else
        c += 3;
    if (u == v)
    {
        b++;
        c++;
    }
    else if (u > v)
        b += 3;
    else
        c += 3;
    cout<<a<<" "<<b<<" "<<c;
}