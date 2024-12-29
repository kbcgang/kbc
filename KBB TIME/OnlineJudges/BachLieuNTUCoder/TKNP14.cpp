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
using namespace std;

bool ktr(const vector<int> &a, int n, int k, double x)
{
    vector<double> f(n + 1, 0.0);
    for (int i = 1; i <= n; ++i)
    {
        f[i] = f[i - 1] + a[i - 1] - x;
    }
    double minn = 0.0;
    for (int i = k; i <= n; ++i)
    {
        if (f[i] - minn >= 0)
        {
            return true;
        }
        minn = min(minn, f[i - k + 1]);
    }

    return false;
}

JAV()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    double l = -1e9, r = 1e9, kq = 0.0;
    while (r - l > 1e-4)
    {
        double mid = (l + r) / 2;
        if (ktr(a, n, k, mid))
        {
            kq = mid;
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << fixed << setprecision(3) << kq << endl;
    return 0;
}
