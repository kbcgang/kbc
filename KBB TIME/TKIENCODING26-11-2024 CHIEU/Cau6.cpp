/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
string s;
int ans, t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    map<char, int> dem;
    while (t--)
    {
        ans = 0;
        cin >> s;
        s = ' ' + s;
        for (int i = 1; i < s.size(); i++)
        {
            if (dem[s[i]] > 0)
            {
                ans += dem.size() - 1;
                dem.clear();
            }
            else
                dem[s[i]] = i;
        }
        ans += dem.size();
        cout << ans << "\n";
        dem.clear();
    }
}