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

int n, p, l = 0, r = 0, a;

int val[Million + 5][25]; // Lưu giá trị
int pos[Million + 5][25]; // Lưu vị trí tương ứng
int sz[Million + 5];      // Kích thước mỗi d[i]

// Tìm vị trí đầu tiên có phần tử > val trong mảng d[i]
int bsearch(int i, int val_cmp)
{
    int left = 0, right = sz[i] - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (val[i][mid] <= val_cmp)
            right = mid - 1;
        else
            left = mid + 1;
    }

    ++right;
    if (right == sz[i])
        return n;
    return pos[i][right];
}

JAV()
{
    cin >> n >> p;
    cin >> a;

    val[1][0] = a;
    pos[1][0] = 1;
    sz[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        cin >> a;
        sz[i] = sz[i - 1];
        for (int j = 0; j < sz[i]; ++j)
        {
            val[i][j] = val[i - 1][j];
            pos[i][j] = pos[i - 1][j];
        }

        if (a > p)
        {
            int t = bsearch(i, a - p);
            if (r - l < i - t)
            {
                l = t;
                r = i;
            }
        }

        if (a < val[i][sz[i] - 1])
        {
            val[i][sz[i]] = a;
            pos[i][sz[i]] = i;
            sz[i]++;
        }
    }

    if (l != 0)
        cout << r - l;
    else
        cout << 0;

    return 0;
}
