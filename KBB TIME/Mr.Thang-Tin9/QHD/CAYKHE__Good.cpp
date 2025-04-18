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

JAV() {
    int n, m;
    cin >> n >> m;

    int a[105], b[105]; // a[i]: giá trị, b[i]: thể tích
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int best_value = 0;
    int best_mask = 0;

    for (int mask = 0; mask < (1 << n); mask++) {
        int sum_value = 0, sum_volume = 0;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                sum_value += a[i];
                sum_volume += b[i];
            }
        }
        if (sum_volume <= m && sum_value > best_value) {
            best_value = sum_value;
            best_mask = mask;
        }
    }

    cout << best_value << endl;

    int count = 0;
    int pos[105];
    for (int i = 0; i < n; i++) {
        if ((best_mask >> i) & 1) {
            pos[count++] = i + 1; // đánh số từ 1
        }
    }

    // cout << count;
    // for (int i = 0; i < count; i++) {
    //     cout << " " << pos[i];
    // }
    // cout << endl;

    return 0;
}
