///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx = 0,minn = INT_MAX, vtr,ans,l,r;

bool ktr(kien mid)
{
    kien dem = 0;
    for (kien i = 1; i <= n; i++)
    {
        if (a[i] >= mid)
        {
            dem += a[i] / mid; 
        }
    }
    if (dem >= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void tknp()
{
    kien l = minn, r = maxx;
    kien mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid) == true)
        {
            kq = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (kq == -1)
    {
        cout << 0;
        exit(0);
    }
    cout << kq;
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
        minn = min(minn, a[i]);
        maxx = max(maxx, a[i]);
    }
    sort(a + 1, a + 1 + n);
    tknp();
}
