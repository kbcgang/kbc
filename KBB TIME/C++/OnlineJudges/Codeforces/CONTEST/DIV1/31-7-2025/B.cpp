#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

// Khai báo cấu trúc Fenwick Tree (BIT)
template <typename T>
struct FenwickTree {
    int n;
    std::vector<T> tree;

    FenwickTree(int size) : n(size), tree(size + 1, 0) {}

    void update(int idx, T delta) {
        // BIT dùng index 1-based
        for (; idx <= n; idx += idx & -idx) {
            tree[idx] += delta;
        }
    }

    T query(int idx) {
        // BIT dùng index 1-based
        T sum = 0;
        for (; idx > 0; idx -= idx & -idx) {
            sum += tree[idx];
        }
        return sum;
    }
};

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> pos(n + 1);
    for (int i = 1; i <= n; ++i) {
        int p_val;
        std::cin >> p_val;
        pos[p_val] = i; // pos[giá trị] = vị trí (1-based)
    }

    long long total_inversions = 0;
    FenwickTree<int> bit(n);
    int placed_count = 0;

    // Duyệt theo giá trị từ lớn về nhỏ
    for (int k = n; k >= 1; --k) {
        int current_pos = pos[k];

        // Đếm số vị trí đã đặt ở bên trái và bên phải
        int left_placed = bit.query(current_pos - 1);
        int right_placed = placed_count - left_placed;

        // Thêm chi phí nhỏ hơn vào tổng
        total_inversions += std::min(left_placed, right_placed);

        // Cập nhật rằng vị trí này đã được đặt
        bit.update(current_pos, 1);
        placed_count++;
    }

    std::cout << total_inversions << "\n";
}

int main() {
    // Tăng tốc độ nhập xuất
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
