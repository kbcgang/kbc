/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int x;
bool odd(int n)
{
    while (n > 0)
    {
        if ((n % 10) % 2 == 0)
            return 0;
        n /= 10;
    }
    return 1;
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
    int ans = 0, d = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (odd(x))
            d++;
        else
        {
            ans = max(ans, d);
            d = 0;
        }
    }ans=max(ans,d);
    cout << ans;
}