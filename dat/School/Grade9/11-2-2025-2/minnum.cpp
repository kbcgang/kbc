/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t, n, k;
string s;
void ChatGPT()
{
    if (k == 0)
        return;
    if (s.size() == 1)
    {
        s[0] = '0';
        return;
    }
    if (s.front() != '1')
    {
        s[0] = '1';
        k--;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (k == 0)
            return;
        if (s[i] != '0')
        {
            k--;
            s[i] = '0';
        }
    }
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
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> s;
        ChatGPT();
        cout << s << "\n";
    }
}