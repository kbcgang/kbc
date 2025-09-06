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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    if (!(cin >> N)) return 0;
    const int MAXN = 100000 + 5;
    static kien a[MAXN];
    for (int i = 1; i <= N; ++i) cin >> a[i];

    const kien NEG = LLONG_MIN / 4;

    // best_pair[j] = max_{i < j} (3*a[i] + a[j]) defined for j >= 2
    static kien best_pair[MAXN];
    for (int i = 0; i <= N; ++i) best_pair[i] = NEG;

    kien max3prefix = NEG;
    // initialize max3prefix with i = 1 for j = 2
    max3prefix = 3 * a[1];
    for (int j = 2; j <= N; ++j) {
        // max3prefix currently = max_{i < j} 3*a[i]
        best_pair[j] = max3prefix + a[j];
        // update for future j
        if (3 * a[j] > max3prefix) max3prefix = 3 * a[j];
    }

    // best_triplet[k] = max_{i<j<k} (3a_i + a_j) - 2*a[k], defined for k >= 3
    static kien best_triplet[MAXN];
    for (int i = 0; i <= N; ++i) best_triplet[i] = NEG;

    kien mx_pair = NEG;
    for (int k = 3; k <= N; ++k) {
        if (best_pair[k-1] > mx_pair) mx_pair = best_pair[k-1];
        if (mx_pair != NEG) best_triplet[k] = mx_pair - 2 * a[k];
    }
    kien ans = NEG;
    kien mx_triplet = NEG;
    for (int h = 4; h <= N; ++h) {
        if (best_triplet[h-1] > mx_triplet) mx_triplet = best_triplet[h-1];
        if (mx_triplet != NEG) {
            kien cand = mx_triplet - a[h];
            if (cand > ans) ans = cand;
        }
    }

    cout << ans << '\n';
    return 0;
}
