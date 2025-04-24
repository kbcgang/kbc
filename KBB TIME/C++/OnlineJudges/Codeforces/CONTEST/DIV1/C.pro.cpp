#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    // We'll model this as a bipartite graph where we need to assign parities (0/1)
    // to rows and columns such that:
    // For every cell (i,j), (row_parity[i] + col_parity[j] + grid[i][j]) % 2 != adjacent cells
    
    // First, determine required parities based on adjacent cells
    bool possible = true;
    
    // Check if the problem is feasible
    for (int i = 0; i < n && possible; i++) {
        for (int j = 0; j < n && possible; j++) {
            if (i > 0) {
                if ((grid[i][j] - grid[i-1][j]) % 2 == 0) {
                    // Must have different parities in vertical direction
                }
            }
            if (j > 0) {
                if ((grid[i][j] - grid[i][j-1]) % 2 == 0) {
                    // Must have different parities in horizontal direction
                }
            }
        }
    }
    
    if (!possible) {
        cout << -1 << '\n';
        return;
    }
    
    // Now find the minimal cost to assign parities to rows and columns
    // We'll try both possibilities for the first row and propagate
    
    // Try row0 parity 0
    ll cost1 = 0;
    vector<int> row_parity(n, 0);
    vector<int> col_parity(n, -1);
    
    row_parity[0] = 0;
    for (int j = 0; j < n; j++) {
        // Determine column j's parity based on (0,j) and (1,j)
        if (n > 1) {
            int needed = (grid[0][j] + row_parity[0] + 1) % 2;
            needed = (needed - grid[1][j]) % 2;
            if (needed < 0) needed += 2;
            col_parity[j] = needed;
        }
    }
    
    // For rows, determine parity based on first two columns
    for (int i = 1; i < n; i++) {
        if (n > 1) {
            int needed = (grid[i][0] + col_parity[0] + 1) % 2;
            needed = (needed - grid[i][1]) % 2;
            if (needed < 0) needed += 2;
            row_parity[i] = needed;
        }
    }
    
    // Verify all constraints
    bool valid = true;
    for (int i = 0; i < n && valid; i++) {
        for (int j = 0; j < n && valid; j++) {
            int current = (grid[i][j] + row_parity[i] + col_parity[j]) % 2;
            if (i > 0) {
                int up = (grid[i-1][j] + row_parity[i-1] + col_parity[j]) % 2;
                if (current == up) valid = false;
            }
            if (j > 0) {
                int left = (grid[i][j-1] + row_parity[i] + col_parity[j-1]) % 2;
                if (current == left) valid = false;
            }
        }
    }
    
    if (valid) {
        for (int i = 0; i < n; i++) {
            if (row_parity[i]) cost1 += a[i];
            if (col_parity[i]) cost1 += b[i];
        }
    } else {
        cost1 = INF;
    }
    
    // Try row0 parity 1
    ll cost2 = a[0];
    fill(row_parity.begin(), row_parity.end(), 0);
    fill(col_parity.begin(), col_parity.end(), -1);
    
    row_parity[0] = 1;
    for (int j = 0; j < n; j++) {
        if (n > 1) {
            int needed = (grid[0][j] + row_parity[0] + 1) % 2;
            needed = (needed - grid[1][j]) % 2;
            if (needed < 0) needed += 2;
            col_parity[j] = needed;
        }
    }
    
    for (int i = 1; i < n; i++) {
        if (n > 1) {
            int needed = (grid[i][0] + col_parity[0] + 1) % 2;
            needed = (needed - grid[i][1]) % 2;
            if (needed < 0) needed += 2;
            row_parity[i] = needed;
        }
    }
    
    valid = true;
    for (int i = 0; i < n && valid; i++) {
        for (int j = 0; j < n && valid; j++) {
            int current = (grid[i][j] + row_parity[i] + col_parity[j]) % 2;
            if (i > 0) {
                int up = (grid[i-1][j] + row_parity[i-1] + col_parity[j]) % 2;
                if (current == up) valid = false;
            }
            if (j > 0) {
                int left = (grid[i][j-1] + row_parity[i] + col_parity[j-1]) % 2;
                if (current == left) valid = false;
            }
        }
    }
    
    if (valid) {
        for (int i = 0; i < n; i++) {
            if (row_parity[i]) cost2 += a[i];
            if (col_parity[i]) cost2 += b[i];
        }
    } else {
        cost2 = INF;
    }
    
    ll total_cost = min(cost1, cost2);
    if (total_cost >= INF) {
        cout << -1 << '\n';
    } else {
        cout << total_cost << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}