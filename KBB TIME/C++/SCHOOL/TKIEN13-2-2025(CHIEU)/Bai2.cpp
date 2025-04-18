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
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n %  i == 0)
        {
            ans++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        ans++;
        cout << ans;
        exit(0);
    }
    cout << ans;
}