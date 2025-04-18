/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, a[100005];

bool ktr(kien mid)
{
    kien group = 0, dem = 1;
    for (int i = 0; i < n; i++)
    {
        if (group + a[i] > mid)
        {
            dem++;
            group = a[i];
            if (dem > k)
            {
                return false;
            }
        }
        else
        {
            group += a[i];
        }
    }
    return true;
}

kien tknp(kien maxx, kien sum)
{
    kien l = maxx, r = sum, ans = sum;
    kien mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    kien sum = 0, maxx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        maxx = max(maxx, a[i]);
    }
    cout << tknp(maxx, sum) << "\n";
}
