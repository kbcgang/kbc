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
kien n,k,m,dem, a[Million];
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;  i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            dem++;
            a[dem] = i;
            if (n / i != i)
            {
                dem++;
                a[dem] = n / i;
            }
        }
    }
    for (int i = 1; i <= dem; i++)
    {
        if (k % a[i] == 0)
        {
            ans++;
        }
    }
    cout << ans;
}