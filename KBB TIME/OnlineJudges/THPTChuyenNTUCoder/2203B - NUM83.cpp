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
kien t;
kien timso(kien n)
{
    return n / 3 + n / 8 - n / 24;
}

kien ans(kien k)
{
    kien left = 1, right = 1e10;
    while (left < right)
    {
        kien mid = left + (right - left) / 2;
        if (timso(mid) < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        kien k;
        cin >> k;
        cout << ans(k) << endl;
    }
    return 0;
}
