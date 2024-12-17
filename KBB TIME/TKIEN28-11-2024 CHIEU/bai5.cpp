///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

int bigMod(char *base, kien exp, int mod)
{
    kien ans = 0, n = strlen(base);
    for(int i = 0; i < n; i++)
    {
        ans = (ans * 10 + (base[i] - '0')) % mod;
    }
    kien result = 1, base_mod = ans;
    while(exp)
    {
        if(exp & 1) result = result * base_mod % mod;
        base_mod = base_mod * base_mod % mod;
        exp >>= 1;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    char a[51];
    kien prefix = 0, res = 0;
    map<kien, kien> mod_count;
    mod_count[0] = 1;
    for(kien i = 0; i < n; i++)
    {
        cin >> a;
        kien mod_value = bigMod(a, m, k);
        prefix = (prefix + mod_value) % k;
        if(prefix < 0) prefix += k;
        res += mod_count[prefix];
        mod_count[prefix]++;
    }
    cout << res << '\n';
    return 0;
}
