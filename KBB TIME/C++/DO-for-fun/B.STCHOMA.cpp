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

kien n, k, a[Million], ror[Million], pos[Million], ST[4 * Million];

// build tree ko cần vì chỉ update rồi query

void update(kien id, kien l, kien r, kien vt, kien val) {
    if (l == r) {
        ST[id] += val;
    } else {
        kien mid = (l + r) / 2;
        if (vt <= mid) update(id * 2, l, mid, vt, val);
        else update(id * 2 + 1, mid + 1, r, vt, val);
        ST[id] = ST[id * 2] + ST[id * 2 + 1];
    }
}

kien get(kien id, kien l, kien r, kien kth) {
    if (l == r) return l;
    kien mid = (l + r) / 2;
    if (ST[id * 2] >= kth) return get(id * 2, l, mid, kth);
    else return get(id * 2 + 1, mid + 1, r, kth - ST[id * 2]);
}

JAV() {
    cin >> n >> k;
    for (kien i = 0; i < n; i++) {
        cin >> a[i];
        ror[i] = a[i];  // copy để rời rạc hóa
    }

    // Rời rạc hóa
    sort(ror, ror + n);
    kien sl = unique(ror, ror + n) - ror;
    for (kien i = 0; i < n; i++) {
        pos[i] = lower_bound(ror, ror + sl, a[i]) - ror;
    }

    // Khởi tạo cửa sổ đầu tiên
    for (kien i = 0; i < k; i++) {
        update(1, 0, n - 1, pos[i], 1);
    }

    kien res = ror[get(1, 0, n - 1, (k + 1) / 2)];

    for (kien i = k; i < n; i++) {
        update(1, 0, n - 1, pos[i - k], -1);  // xóa phần tử cũ
        update(1, 0, n - 1, pos[i], 1);       // thêm phần tử mới
        kien med = ror[get(1, 0, n - 1, (k + 1) / 2)];
        if (med > res) res = med;
    }

    cout << res << "\n";
    return 0;
}
