///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], a[1000000];
kien maxx, minn = LLONG_MAX, ans = 0;

bool ktr(kien mid)
{
    kien dem = 0;
    for (kien i = 1; i <= n; i++)
    {
        dem += a[i] / mid; 
    }
    return dem >= k;
}

void tknp()
{
    kien l = 1, r = maxx;
    while (l <= r)
    {
        kien mid = (l + r) / 2;
        if (ktr(mid)) 
        {
            ans = mid; 
            l = mid + 1;
        }
        else
        {
            r = mid - 1; 
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    tknp(); 
}
    