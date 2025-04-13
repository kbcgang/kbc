/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll a, b;
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
    cin >> a >> b;
    a %= 10;
    if (b == 0)
    {
        cout << 1;
        exit(0);
    }
    b %= 100;
    if (a == 0 || a == 1 || a == 5 || a == 6)
        cout << a;
    else if (a == 4 || a == 9)
    {
        b %= 2;
        if (b == 0)
            b = 2;
        a = pow(a, b);
        cout << a % 10;
    }
    else
    {
        b %= 4;
        if (b == 0)
            b = 4;
        a = pow(a, b);
        cout << a % 10;
    }
}