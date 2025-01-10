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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[100005] = {0}, b[100005] = {0}, f[100005] = {0}, x = INT_MAX, y = INT_MIN, res = INT_MIN;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x = min(x, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            y = max(y, b[i]);
            for (int j = a[i]; j <= b[i]; j++)
            {
                f[j]++;
            }
        }
        for (int i = x; i <= y; i++)
        {
            res = max(res, f[i]);
        }
        cout << res << '\n';
    }
}
