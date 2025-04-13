/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

using namespace std;

typedef long long ll;

// Base mapping for 2x2 table
int base_val[2][2] = {
    {1, 2},
    {3, 4}
};

pair<int, int> base_coord[5] = {
    {0, 0},     // dummy 0 index
    {1, 1},     // 1
    {1, 2},     // 2
    {2, 1},     // 3
    {2, 2}      // 4
};

int get_value(int n, int x, int y) {
    if (n == 1) return base_val[x - 1][y - 1];

    int half = 1 << (n - 1);
    int cells = half * half;

    if (x <= half && y <= half) {
        return get_value(n - 1, x, y);
    } else if (x <= half && y > half) {
        return get_value(n - 1, x, y - half) + cells;
    } else if (x > half && y <= half) {
        return get_value(n - 1, x - half, y) + 2 * cells;
    } else {
        return get_value(n - 1, x - half, y - half) + 3 * cells;
    }
}

pair<int, int> get_coord(int n, int d) {
    if (n == 1) return base_coord[d];

    int half = 1 << (n - 1);
    int cells = half * half;

    if (d <= cells) {
        return get_coord(n - 1, d);
    } else if (d <= 2 * cells) {
        pair<int, int> coord = get_coord(n - 1, d - cells);
        return make_pair(coord.first, coord.second + half);
    } else if (d <= 3 * cells) {
        pair<int, int> coord = get_coord(n - 1, d - 2 * cells);
        return make_pair(coord.first + half, coord.second);
    } else {
        pair<int, int> coord = get_coord(n - 1, d - 3 * cells);
        return make_pair(coord.first + half, coord.second + half);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        while (q--) {
            string type;
            cin >> type;
            if (type == ">") {
                int x, y;
                cin >> x >> y;
                cout << get_value(n, x, y) << '\n';
            } else {
                int d;
                cin >> d;
                pair<int, int> coord = get_coord(n, d);
                cout << coord.first << ' ' << coord.second << '\n';
            }
        }
    }

    return 0;
}