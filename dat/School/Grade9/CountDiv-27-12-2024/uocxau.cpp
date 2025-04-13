/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
int n;
bool ChatGPT(int base, int x)
{
    if (x + base > n)
        return 1;
    for (int i = x; i < x + base; i++)
        if (s[i] != s[i - x])
            return 0;
    return ChatGPT(base, x + base);
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
    cin >> s;
    n = s.size();
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            if (ChatGPT(i, i))
            {
                for (int j = 0; j < i; j++)
                    cout << s[j];
                exit(0);
            }
}