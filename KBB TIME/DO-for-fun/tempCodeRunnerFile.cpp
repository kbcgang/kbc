///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

bool ktr(int mid)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > mid)
        {
            sum += a[i] - mid;
        }
    }
    if (sum >= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int tknp()
{
    int l = 1, r = maxx;
    int mid = 0, kq = -1;
    while (l <= r)
    {
        mid = (l+r)/2;
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
    return kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    cout << tknp();

}