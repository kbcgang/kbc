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
kien tongchiahetchoa, tongchiahetchob;
kien sumofboth_a_b;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien bcnn,t,a,b;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> l >> r >> a >> b;
        bcnn = a*b / __gcd(a,b);
        tongchiahetchoa = r/a - (l-1)/a;
        tongchiahetchob = r/b - (l-1)/b;
        sumofboth_a_b = r/bcnn - (l-1)/bcnn;
        ans = (tongchiahetchoa + tongchiahetchob - sumofboth_a_b);
        cout << ans << "\n";
    }
}