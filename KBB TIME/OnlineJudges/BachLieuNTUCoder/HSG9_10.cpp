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
kien n, k, t, dem;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t; 
    while (t--)
    {
        cin >> n >> k; 
        dem = 0;
        if (k <= n)
        {
            kien p = k;
            while (p <= n)
            {
                dem += n / p;
                p *= k; 
            }
        }
        cout << dem << "\n"; 
    }
    return 0;
}
    