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

JAV()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), left(n + 1, 1), right(n + 1, 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 2; i <= n; ++i)
    {
        if (a[i] > a[i - 1])
        {
            left[i] = left[i - 1] + 1;
        }
    }

    for (int i = n - 1; i >= 1; --i)
    {
        if (a[i] < a[i + 1])
        {
            right[i] = right[i + 1] + 1;
        }
    }

    int result = 1;

    for (int i = 1; i <= n; ++i)
    {
        result = max(result, left[i]);

        if (i > 1 && i < n && a[i - 1] + 1 < a[i + 1])
        {
            result = max(result, left[i - 1] + right[i + 1] + 1);
        }
    }

    cout << result << endl;
    return 0;
}
