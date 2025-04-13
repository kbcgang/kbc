/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int ans;
int f[100005], d[100005];
void make_sieve()
{
    for (int i = 2; i <= 1e5; i++)
        if (f[i] == 0)
            for (int j = i; j <= 1e5; j += i)
                if (f[j] == 0)
                    f[j] = i;
}
void KBCGPT(int n)
{
    int s = 1, b = 0;
    while (n > 1)
    {
        if (f[n] != b)
        {
            s *= (d[b] + 1);
            d[b] = 0;
            b = f[n];
            if (s > 9)
                return;
        }
        d[b]++;
        n /= b;
    }
    s *= (d[b] + 1);
    d[b] = 0;
    ans += (s == 9);
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
    cin >> n;
    make_sieve();
    for (int i = 2; i <= n; i++)
        KBCGPT(i);
    cout << ans;
}