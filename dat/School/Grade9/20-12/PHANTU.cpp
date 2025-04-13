/// A game is our childhood
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
    for (int i = 0; i < s.size();)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            char m=s[i];
            i++;
            ll dem = 0;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9')
            {
                dem = dem * 10 + s[i] - '0';
                i++;
            }
            if (dem == 0)
                dem = 1;
            if (m == 'H')
                ans += dem * 1;
            if (m == 'C')
                ans += dem * 12;
            if (m == 'O')
                ans += dem * 16;
            if (m == 'N')
                ans += dem * 14;
        }
    }
    cout << ans;
}