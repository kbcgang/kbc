/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define JAV main
#define Million 100000
#define NT 10000000
#define MOD 1000000007
// Biến toàn cục cho hàm solveKien()
ll n, k, m, dem, f[Million + 5], le[Million + 5], chan[Million + 5];
ll maxx, minn, vtr, ans, l, r;
unsigned long long a[Million + 5];

// Hàm giải "kien" (tính số cặp chỉ số mà tổng prefix có cùng tính chẵn/lẻ)
void solveKien()
{
    cin >> n;
    f[0] = 0;
    chan[0] = 1;
    le[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
        chan[i] = chan[i - 1];
        le[i] = le[i - 1];
        if (f[i] % 2 == 0)
        {
            chan[i] = chan[i - 1] + 1;
        }
        else
        {
            le[i] = le[i - 1] + 1;
        }
    }
    cout << chan[n] * (chan[n] - 1) / 2 + le[n] * (le[n] - 1) / 2 << "\n";
}

// Hàm giải "dat" (ví dụ một bài quy hoạch động cơ bản sử dụng chuỗi)
void solveDat()
{
    int N;
    ll ans = 0;
    int d[2] = {0, 0};
    int s = 0;
    string str;
    cin >> N;
    d[0] = 1;
    while (N--)
    {
        cin >> str;
        int digit = str.back() - '0';
        s = (s + (digit % 2)) % 2;
        ans += d[s];
        d[s]++;
    }
    cout << ans << "\n";
}

JAV()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Chọn hàm cần chạy:
    // Nếu bạn muốn chạy giải pháp của bài "kien", gọi:
    solveKien();
    // Nếu bạn muốn chạy giải pháp của bài "dat", hãy comment dòng trên và uncomment dòng dưới:
    // solveDat();

    return 0;
}
