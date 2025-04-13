/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int pos[30], q;
string a;
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
    cin >> q;
    while (q--)
    {
        cin >> a;
        int ans = 1e9;
        for (int i = 1; i <= a.size(); i++)
        {
            if (pos[a[i - 1] - 97] != 0)
                pos[a[i - 1] - 97] = -1;
            else if (pos[a[i - 1] - 97] == 0)
                pos[a[i - 1] - 97] = i;
        }
        for (int i = 0; i < 26; i++)
        {
            if (pos[i] > 0)
                ans = min(ans, pos[i]);
            pos[i] = 0;
        }
        if (ans == 1e9)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
    // cout<<'z'-'a';
}