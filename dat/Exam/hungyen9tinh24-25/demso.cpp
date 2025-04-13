/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
unordered_map<string, int> d;
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
    string x;
    for (int i = 0; i <= s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9')
            x.push_back(s[i]);
        else
        {
            while (x.front() == '0')
                x.erase(0, 1);
            d[x]++;
            x.clear();
        }
    int ans = 0;
    for (auto i : d)
    {
        ans += (i.second == 1);
        // cout << i.first << "\n";
    }
    cout << ans;
}