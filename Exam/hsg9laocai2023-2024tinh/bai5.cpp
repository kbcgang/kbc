/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n, a[100005];
int ans;
int check(int m, int cuoi)
{
    int MIN = INT_MAX, MAX = 0;
    int dau = 0;
    int x = m / 2 + 1;
    while (dau <= cuoi)
    {
        int mid = (dau + cuoi) / 2;
        if (a[mid] < x)
        {
            cuoi = mid - 1;
            MIN = a[mid];
        }
        else if (a[mid] > x)
        {
            dau = mid + 1;
            MAX = a[mid];
        }
        else
            return m % a[mid];
    }
    return max(m%MIN,m%MAX);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, check(a[i], i));
    }
    cout << ans;
}