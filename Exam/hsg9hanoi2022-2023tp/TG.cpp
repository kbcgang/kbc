/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, m;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> m;
        int a = m % 60;
        string p;
        if (a < 10)
        {
            p = '0';
            p = p + char(a + 48);
        }
        else
        {
            p = char(a / 10 + 48);
            p = p + char(a % 10 + 48);
        }
        m /= 60;
        cout << "0" << m + 8 << ":" << p << "\n";
    }
}