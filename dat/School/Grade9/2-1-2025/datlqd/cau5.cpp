/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
int ans, k, l, r;
int res;
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
    getline(cin, s);
    // cin.ignore();
    cin >> k;
    k = k % 26;
    // cout << ans << "\n";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] - k < 'a')
                s[i] = char('z' - (k - s[i] + 'a') + 1);
            else
                s[i] -= k;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] - k < 'A')
                s[i] = char('Z' - (k - s[i] + 'A') + 1);
            else
                s[i] -= k;
        }
        // cout << s[i];
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            int m = s.find(' ',i);
            if (m == -1)
                m = s.size();
            if (m - i > res)
            {
                l = i;
                r = m;
                res = m - i;
                ans = 1;
            }
            else if (m - i == res)
                ans++;
            i = m;
        }
    }
    cout << ans << "\n";
    for (int i = l; i < r; i++)
        cout << s[i];
}