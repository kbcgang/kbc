/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
vector<ll> a;
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
        if (s[i] >= '0' && s[i] <= '9')
        {
            ll res = 0;
            while (s[i] >= '0' && s[i] <= '9' && i < s.size())
            {
                res = res * 10 + s[i] - 48;
                i++;
            }
            a.push_back(res);
        }
    }
    sort(a.begin(), a.end());
    for (auto i : a)
        cout << i << " ";
}