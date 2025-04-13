/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k;
string s, ans;
string kbc(string a, string b)
{
    if (b.size() > a.size())
        return b;
}
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
    cin >> n >> k;
    cin >> s;
    string a[k + 1];
    sort(s.begin(), s.end());
    for (int i = 1; i <= k; i++)
        a[i] = a[i] + s[i];
    for (int i = k; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (a[j].back() != s[i] || a[j].empty())
                a[j] = a[j] + s[i];
        }
        for (int j = 1; j <= k; j++)
        {
            // bool save=0;
            if (a[0].size() < a[j].size())
            {
                for (int z = a[0].size(); z < a[j].size(); z++)
                {
                    // if ()
                    a[0] = a[0] + a[j][z];
                    // z++;
                }
                a[j].erase();
            }
        }
    }
    // sort(a, a + k);
    cout << a[0];
}