/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
bool snt[NT];
int ans = 1;
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(NT); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= NT; j += i)
                snt[j] = 1;
}
unordered_map<int, int> dem;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien n;
    cin >> n;
    make_sieve();
    for (int i = 2; i <= n; i++)
    {
        if (snt[i] == 0)
        {
            kien res = n;
            while (res > 0)
            {
                dem[i] += res / i;
                res /= i;
            }
            dem[i] /= 3;
        }
    }
    for (auto i : dem)
    {
        ans = 1ll * ans * (i.second + 1) % MOD;
    }
    cout << ans;
}