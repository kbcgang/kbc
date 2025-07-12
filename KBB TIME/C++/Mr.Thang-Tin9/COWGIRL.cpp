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

// Giới hạn tối đa: l (số hàng) ≤ 6, r (số cột) ≤ 30
static kien dp[31][1<<6];

JAV() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        // Đảm bảo l là số hàng (độ cao mask nhỏ hơn)
        if (l > r) {
            int tmp = l;
            l = r;
            r = tmp;
        }
        int fullMask = (1 << l);

        // Reset dp cho c = 0..r, mask = 0..fullMask-1
        for (int c = 0; c <= r; c++) {
            for (int mask = 0; mask < fullMask; mask++) {
                dp[c][mask] = 0;
            }
        }

        // Khởi tạo: cột 0, chỉ 1 cách với mask = 0
        dp[0][0] = 1;

        // DP qua từng cột
        for (int c = 1; c <= r; c++) {
            for (int mask = 0; mask < fullMask; mask++) {
                // Bỏ qua mask có 2 con bò dọc kề nhau
                bool okMask = true;
                for (int i = 0; i + 1 < l; i++) {
                    if (((mask >> i) & 1) == 1 && ((mask >> (i+1)) & 1) == 1) {
                        okMask = false;
                        break;
                    }
                }
                if (okMask == false) {
                    continue;
                }
                // Chuyển từ mọi mask của cột c-1
                for (int prev = 0; prev < fullMask; prev++) {
                    // Kiểm tra không tạo thành vuông 2x2
                    // Tức là không có vị trí i sao cho
                    // prev[i]=prev[i+1]=mask[i]=mask[i+1]=1
                    if ((prev & mask & (prev << 1) & (mask << 1)) == 0) {
                        dp[c][mask] = (dp[c][mask] + dp[c-1][prev]) % MOD;
                    }
                }
            }
        }

        // Tính tổng kết quả ở cột r
        kien ans = 0;
        for (int mask = 0; mask < fullMask; mask++) {
            ans = (ans + dp[r][mask]) % MOD;
        }
        cout << ans << "\n";
    }

    return 0;
}
