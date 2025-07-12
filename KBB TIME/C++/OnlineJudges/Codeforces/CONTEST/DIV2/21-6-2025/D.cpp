#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define kien long long
#define JAV main
// Hàm tính a^b mod MOD bằng phương pháp bình phương và nhân
kien power(kien base, kien exp) {
    kien res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Hàm tính nghịch đảo modular của n theo modulo MOD
// Dựa trên Định lý nhỏ Fermat: a^(p-2) = a^(-1) (mod p)
kien modInverse(kien n) {
    return power(n, MOD - 2);
}

// Hàm tính C(n_val, r) mod MOD
// n_val có thể rất lớn, r <= 10^5
kien nCr_mod_p(kien n_val, int r) {
    if (r < 0) return 0;
    if (r == 0) return 1;

    // n_val >= r được đảm bảo bởi cách chọn n
    kien n_mod = n_val % MOD;

    // Tính tử số: (n_mod * (n_mod-1) * ... * (n_mod-r+1)) mod MOD
    kien numerator = 1;
    for (int i = 0; i < r; ++i) {
        numerator = (numerator * (n_mod - i + MOD)) % MOD;
    }

    // Tính mẫu số: r! mod MOD
    kien denominator = 1;
    // Có thể tối ưu bằng cách tiền tính toán giai thừa nếu có nhiều test case
    // với các giá trị a,b,k gần nhau. Nhưng với ràng buộc sum(max(...))
    // thì việc tính lại trong mỗi test case vẫn đủ nhanh.
    for (int i = 1; i <= r; ++i) {
        denominator = (denominator * i) % MOD;
    }

    // Kết quả = tử số * (mẫu số)^(-1) mod MOD
    return (numerator * modInverse(denominator)) % MOD;
}

void solve() {
    kien a, b, k;
    cin >> a >> b >> k;

    // Trường hợp đặc biệt a=1. Ma trận 1xa là một hàng.
    // Cần tìm m để chắc chắn có một hàng có b phần tử cùng màu.
    // Theo Dirichlet, cần m = k*(b-1) + 1 cột.
    // n nhỏ nhất là 1. Vậy (n,m) = (1, k*(b-1)+1).
    // Công thức chung vẫn đúng cho a=1:
    // n = (1-1)k+1 = 1
    // m = (b-1)k*C(1,1)+1 = (b-1)k+1
    
    // Tính n = (a-1)k + 1
    kien n_val = (a - 1) * k + 1;
    kien n_mod = n_val % MOD;

    // Tính m = (b-1)k * C(n_val, a) + 1
    kien C_val = nCr_mod_p(n_val, a);

    kien m_mod = ((b - 1) % MOD * (k % MOD)) % MOD;
    m_mod = (m_mod * C_val) % MOD;
    m_mod = (m_mod + 1) % MOD;
    
    cout << n_mod << " " << m_mod << endl;
}

JAV() {
    // Tăng tốc độ nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}