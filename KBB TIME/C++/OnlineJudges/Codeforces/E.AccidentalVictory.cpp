/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem;
kien maxx, minn, vtr, l, r, dp[1000000];
pair <int, int> a[Million];

bool ktr(int mid)
{
    int k = a[n - mid + 1].first;
    for (int i = 1; i < n - mid + 1; i++)
    {
        k += a[i].first;
    }
    for (int i = n - mid + 2; i <= n; i++)
    {
        if (k >= a[i].first)
        {
            k += a[i].first;
        }
        else {
            return false;
        }
    }
    return true;
}

int tknp()
{
    int l = 1, r = n;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            kq = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return kq;
}
vector <int> ans;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort (a + 1, a + 1 + n);
        vtr = tknp();
        cout << vtr << "\n";
        for (int i = n - vtr + 1; i <= n; i++)
        {
            ans.push_back(a[i].second);
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
        ans.clear();
   }
       
}
