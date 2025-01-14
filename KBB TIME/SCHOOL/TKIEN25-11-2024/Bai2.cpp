///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
string s,x;

bool ktr(kien n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    kien dem = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin , s);
    s += 'a';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            x += s[i];
        }
        else if (s[i - 1] >= '0' and s[i - 1] <= '9')
        {
            dem = 0;
            for (int j = 0; j < x.size(); j++)
            {
                dem *= 10;
                dem += int(x[j] - 48);
            }
            if (ktr(dem) == true)
            {
                ans = max(ans , dem);
            }
            x = "";
        }
    }
    cout << ans;
}