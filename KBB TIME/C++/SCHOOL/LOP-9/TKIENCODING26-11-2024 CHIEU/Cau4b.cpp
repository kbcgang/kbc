/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < '0' or s[i] > '9')
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] >= '0' and s[j] <= '9')
                {
                    maxx *= 10;
                    maxx += (s[j] - 48);
                }
                else
                {
                    break;
                }
            }
            if (maxx == 0)
            {
                cout << s[i];
            }
            else
            {
                for (int j = 1; j <= maxx; j++)
                {
                    cout << s[i];
                }
            }
            maxx = 0;
        }
    }
}