///HÃ£y lÃ m SÆ° tá»­, Ä‘á»«ng lÃ m Nai.
///HÃ£y lÃ m thá»£ sÄƒn, Ä‘á»«ng lÃ m con má»“i.
/// --- trungkien1252010@gmail.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define MOD 1000000007
kien n, k, ans, f[Million];
unordered_map<kien, kien> pp;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    pp[0] = 1; 
    kien sum = 0;
    for (kien i = 1; i <= n; i++)
    {
        kien x;
        cin >> x;
        sum += x; 
        kien phandu = (sum % k + k) % k; 
        ans += pp[phandu];
        pp[phandu]++;
    }

    cout << ans;
}