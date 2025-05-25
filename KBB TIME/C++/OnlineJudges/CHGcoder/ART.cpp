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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

int tknp(kien x)
{
    int l = 1, r = n; // Tìm kiếm trong các đơn vị từ 1 đến n
    int ans_unit = -1; // Lưu kết quả là số báo danh đơn vị

    while (l <= r)
    {
        int mid = l + (r - l) / 2; // Cách tính mid an toàn hơn để tránh tràn số

        // Nếu tổng số tranh đến đơn vị mid (f[mid]) lớn hơn hoặc bằng x,
        // có nghĩa là bức tranh x có thể thuộc về đơn vị mid hoặc các đơn vị trước đó.
        // Ghi nhận mid là một kết quả có thể và thử tìm kiếm trong nửa đầu.
        if (f[mid] >= x)
        {
            ans_unit = mid;
            r = mid - 1;
        }
        // Nếu tổng số tranh đến đơn vị mid (f[mid]) nhỏ hơn x,
        // có nghĩa là bức tranh x chắc chắn thuộc về đơn vị sau mid.
        // Thử tìm kiếm trong nửa sau.
        else
        {
            l = mid + 1;
        }
    }
    return ans_unit;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    cin >> m;
    kien x;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        k = tknp(x);
        cout << k << " ";        
    }
}
