/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string a, b;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    short x = a[a.size() - 1] - 48;
    if (x == 0 || x == 1 || x == 5 || x == 6)
    {
        cout << x;
        exit(0);
    }
    short y;
    if (b.size() >= 2)
        y = (b[b.size() - 2] - 48) * 10 + (b[b.size() - 1] - 48);
    else
        y = b[b.size() - 1] - 48;
    // cout<<y;
    if (x == 2 || x == 3 || x == 7 || x == 8)
    {
        y = y % 4;
    }
    else if (x == 4 || x == 9)
    {
        y = y % 2;
    }
    if(y==0) y=4;

    short m = pow(x, y);
    cout << m % 10;
}