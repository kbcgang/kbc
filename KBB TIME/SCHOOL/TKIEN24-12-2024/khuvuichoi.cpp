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
    cin >> n >> k;
    for (int i = n; i < k; i++)
    {
        dem++;
        if (i < 12 and dem <= 4)
        {
            ans += 6;
        }
        else if (i >= 12 and dem <= 4)
        {
            ans += 10;
        }
        else if (i < 12 and dem > 4)
        {
            ans += 3;
        }
        else if (i >= 12 and dem > 4)
        {
            ans += 5;
        }
    }
    cout << ans;
}