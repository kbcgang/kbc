/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s, ans;
int k;
map<char, int> dem;
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
    cin >> k;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        dem[s[i]]++;
    for (auto i : dem)
    {
        if (i.second % k != 0)
        {
            cout << -1;
            exit(0);
        }
        for (int j = 0; j < i.second / k; j++)
            ans = ans + i.first;
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < k; i++)
        cout << ans;
}