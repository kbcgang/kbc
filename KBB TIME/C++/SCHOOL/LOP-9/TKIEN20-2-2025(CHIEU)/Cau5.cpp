/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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

const kien N = 1e5 + 5;
kien n, k, a[N];
kien l, r;

kien tknp(int l, int r)
{
    int mid, ans;
    int m = INT_MAX;
    int idx = lower_bound(a + l, a + r + 1, (a[l] + a[r]) / 2) - a;

    if (idx <= r)
    {
        m = min({m, max(int(abs(a[l] - a[idx])), int(abs(a[r] - a[idx])))});
    }
    if (idx - 1 >= l)
    {
        m = min({m, max(int(abs(a[l] - a[idx - 1])), int(abs(a[r] - a[idx - 1])))});
    }
    return m;
}

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    while (k--)
    {
        cin >> l >> r;
        cout << tknp(l, r) << '\n';
    }
    return 0;
}

/*
Có n khu dân cư tại LC, tất cả namfwf dọc theo một con đường cao tốc, các khu được đánh số thứ tự liên tiếp từ 1 đến n
Khu dân cư thứ i có khoảng cách đến điểm xuất phát là di . An đang sống ở khu dân cư x và Bình ở khu y. Hai bạn muốn
tìm 1 khu dân cư z để gặp nhau sao cho MAX{|dx - di|, |dy - dz|} là nhỏ nhất. Hãy giúp họ tìm ra khu dân cư z đó.
Input
Dòng đấu chứa n và k (1 ≤ n ≤ 10^5, 1 ≤ k ≤ 10^5)
Dòng thứ 2 chứa n số nguyên dương a1, a2, ..., an (1 ≤ ai ≤ 10^9)
k dòng tiếp theo mỗi dòng chứa 2 số nguyên l và r (1 ≤ l ≤ r ≤ n)
Output
Với mỗi truy vấn in ra 1 số nguyên là khoảng cách nhỏ nhất tìm được
*/