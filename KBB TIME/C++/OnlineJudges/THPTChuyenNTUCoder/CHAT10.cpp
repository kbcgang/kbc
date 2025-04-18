/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a[1000001];
kien b[100001];
int n, q;

kien gannhat(kien x)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }

    kien minn = abs(a[l] - x);
    if (l > 0)
    {
        minn = min(minn, abs(a[l - 1] - x));
    }
    return minn;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> b[i];
    }
    for (int i = 0; i < q; ++i)
    {
        cout << gannhat(b[i]) << "\n";
    }

    return 0;
}
