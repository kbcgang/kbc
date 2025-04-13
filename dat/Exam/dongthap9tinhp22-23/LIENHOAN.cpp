/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int n, k;
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
    cin >> n >> k;
    if (n % k == 0)
        cout << (n / k) * 3 * 2;
    else
    {
        if (n > k)
            cout << (n / k) * 3 * 2 + 3;
        else
            cout << 6;
    }
}