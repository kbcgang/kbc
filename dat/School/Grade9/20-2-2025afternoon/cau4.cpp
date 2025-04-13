/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
int k;
ll ans;
int d;
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
    cin >> s >> k;
    s = s + s;
    // cout<<s;
    for (int i = 0; i <= s.size(); i++)
        if (s[i] != s[i - 1])
        {
            d/=2;
            ans += 1ll*d * k;
            d = 1;
        }
        else
            d++;
    cout << ans;
}
// bbb