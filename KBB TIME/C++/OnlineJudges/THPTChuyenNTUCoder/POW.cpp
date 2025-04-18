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
kien a, n;
kien sochiadu, chiadu, mod2, ans;

kien luythua(kien a, kien b, kien mod)
{
    kien ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> n;
    if (a == 1)
    {
        cout << (n + 1) % MOD << "\n";
        exit(0);
    }
    sochidu = luythua(a, n + 1, MOD);
    chiadu = (a - 1 + MOD) % MOD;         
    mod2 = luythua(chiadu, MOD - 2, MOD); 
    ans = ((sochidu - 1 + MOD) % MOD * mod2) % MOD;
    cout << ans << "\n";
    return 0;
}



    