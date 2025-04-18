/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000

kien n, t, l, r, x;
vector<kien> a;

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Đọc dữ liệu
    cin >> n;
    a.resize(n);
    for (kien i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sắp xếp mảng để dễ dàng tính toán tổng độ nổi tiếng
    sort(a.begin(), a.end());

    // Tạo mảng prefix_sum để tính tổng nhanh chóng
    vector<kien> prefix_sum(n + 1, 0);
    for (kien i = 0; i < n; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }

    cin >> t; // Đọc số lượng truy vấn
    while (t--) {
        cin >> l >> r >> x;
        l--; r--; // Chuyển từ 1-based index sang 0-based

        // Tính tổng độ nổi tiếng trong phạm vi [l, r]
        // Độ nổi tiếng với giá trị bản thân x
        kien total_sum = 0;
        // Các phần tử từ a[l] đến a[r], chúng ta cần tính tổng |ai - x|
        
        // Tính tổng phần tử ai nhỏ hơn x
        kien left = lower_bound(a.begin(), a.end(), x) - a.begin();
        kien right = upper_bound(a.begin(), a.end(), x) - a.begin();
        
        // Tính tổng độ nổi tiếng trong phạm vi
        total_sum += abs(prefix_sum[right] - prefix_sum[left]);
        cout << total_sum << "\n";
    }
}
