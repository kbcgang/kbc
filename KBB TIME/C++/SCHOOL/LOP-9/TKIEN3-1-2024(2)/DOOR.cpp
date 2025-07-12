///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (kien t = 1; t <= n; t++)
    {
        kien a,b;
        cin >> a >> b;
        ans = (a - (b % a)) % a;
        for (kien i = 2; i*i <= a; i++)
        {
            if (a % i == 0)
            {
                ans = min(ans, (i - (b % i)) % i);
                k = a / i;
                ans = min(ans, (k - (b % k)) % k);
            }
        }
        cout << ans << "\n";
    }
}