/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

bool canPartition(vector<int>& b, int x, int& k) {
    unordered_set<int> have;
    int cnt = 0;
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] < x) have.insert(b[i]);
        if (have.size() == x) {
            ++cnt;
            have.clear();
        }
    }
    k = cnt;
    return cnt > 0;
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> b(n);
    for (int& x : b) cin >> x;

    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    int bestMatch = 0, bestId = -1;
    for (int i = 0; i < m; ++i) {
        int match = 0;
        for (int j = 0; j < n; ++j)
            if (a[i][j] == b[j])
                ++match;
        if (match > bestMatch) {
            bestMatch = match;
            bestId = i + 1; 
        }
    }
    int bestX = -1, bestK = 0;
    for (int x = 1; x <= n; ++x) {
        int curK = 0;
        if (canPartition(b, x, curK)) {
            bestX = x;
            bestK = curK;
        }
    }

    int operations = 3 * n - 2 * bestMatch;
    cout << bestX << ' ' << bestK << ' ' << bestId << ' ' << operations << '\n';

    return 0;
}
