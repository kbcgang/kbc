/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long x, y;
void test()
{
    long long s = 0;
    for (int i = x; i <= y; i++)
        if (i % 3 == 0)
            s += i;
    cout << s;
}
void make_sd3()
{
    while(x%3!=0)
        x++;
    while(y%3!=0)
        y--;
    if (x > y)
        cout << 0;
    else if ((x <= 0 && y <= 0) || (x >= 0 && y >= 0))
    {
        long long ssh = (y - x) / 3 + 1;
        cout << (x + y) * ssh / 2;
    }
    else
    {
        long long sshneg = -x / 3 + 1;
        long long sshpos = y / 3 + 1;
        cout << x * sshneg / 2 + y * sshpos / 2;
    }
}
kien()
{
    if(fopen("SD3.inp","r"))
    {
        freopen("SD3.inp","r",stdin);
        freopen("SD3.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> y;
    // test();
    // cout << "\n";
    make_sd3();
}