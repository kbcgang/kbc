///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

void sangNT()
{
    for (int i = 2; i <= n; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (f[i])
        {
            for (int j = i*i; j <= n; j+= i)
            {
                f[j] = 0;
            }
        }
    }
}

int tongcs(int n)
{
    int sum = 0;
    while (n > 0)
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
    if (fopen("Cau5b.INP", "r"))
    {
        freopen("Cau5b.INP", "r", stdin);
        freopen("Cau5b.OUT", "w", stdout);
    }
    sangNT();
    for (int i = 5; i <= NT; i++)
    {
        dp[i] = dp[i-1];
        if (f[i])
        {
            if (tongcs(i) % 5 == 0)
            {
                dp[i]++;
            }
        }
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        cout << dp[r] - dp[l-1];
    }
}
