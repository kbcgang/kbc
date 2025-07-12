///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----        BAI5
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000];
kien maxx,minn, vtr,ans,l,X, dp[1000000];
kien cuoi;
pair <kien , kien > a[Million];

int tknp(int x)
{
    int l = 1, r = n;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (x >= a[mid].first)
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

int tknp1(int x)
{
    int l = 1, r = n;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (x <= a[mid].first)
        {
            kq = a[mid].first - x;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
        cuoi = max (cuoi, a[i].second);
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= m; i++)
    {
        cin >> X;
        if (X > cuoi)
        {
            cout << -1 << "\n";
        }
        else
        {
            vtr = tknp(X);
            if (a[vtr].second > X)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << tknp1(X) << "\n";
            }
        }
    }
}