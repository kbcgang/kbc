/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
long long ans;
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
    {
        long long t = 0;
        if (s[i] == 'H')
        {
            while (s[i + 1] <= '9' && i < s.size()-1)
            {
                t = t * 10 + s[i+1] - 48;
                i++;
            }
            if (t == 0)
                ans++;
            else
                ans += t;
        }
        if (s[i] == 'C')
        {
            while (s[i + 1] <= '9' && i < s.size()-1)
            {
                t = t * 10 + s[i+1] - 48;
                i++;
            }
            if (t == 0)
                ans += 12;
            else
                ans += t * 12;
        }
        if (s[i] == 'O')
        {
            while (s[i + 1] <= '9' && i < s.size()-1)
            {
                t = t * 10 + s[i+1] - 48;
                i++;
            }
            if (t == 0)
                ans += 16;
            else
                ans += t * 16;
        }
        if (s[i] == 'N')
        {
            while (s[i + 1] <= '9' && i < s.size()-1)
            {
                t = t * 10 + s[1+i] - 48;
                i++;
            }
            if (t == 0)
                ans += 14;
            else
                ans += t * 14;
        }
    }
    cout << ans;
}