///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

int tongcs(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[tongcs(a[i])]++;
    }
    for(int i = 1; i <= 100; i++)
    {
        if(f[i] > 1)
        {
            ans += f[i]*(f[i] - 1)/2;
        }
    }
    cout << ans;
}
