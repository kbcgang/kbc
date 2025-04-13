/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
ll ans;
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
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] % 4 == 0)
            ans++;
    for (int i = 0; i < s.size() - 1; i++)
    {
        int n = (s[i] - 48) * 10 + s[i + 1] - 48;
        if (n % 4 == 0)
            ans += i + 1;
    }
    cout << ans;
}