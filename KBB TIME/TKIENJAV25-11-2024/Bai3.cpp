///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

void sanguoc()
{
    for(int i = 1; i <= Million; i++)
    {
        f[i] = 1;
    }
    f[0] = 0;
    for(int i = 2; i <= Million; i++)
    {
        for(int j = i; j <= Million; j += i)
        {
            f[j] += i;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sanguoc();
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cout << (f[a[i]] >= 2 * a[i]) << '\n';
    }
}
