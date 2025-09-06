#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int mod = 998244353;
const int MAX_N = 101;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
        }

        int dp[MAX_N][MAX_N][MAX_N] = {0};

        for (int i = 1; i <= n; i++) {
            if (s[i] == -1) {
                for (int x = 0; x < n; x++) {
                    dp[i][i][x] = 1;
                }
            } else {
                if (s[i] < n) {
                    dp[i][i][s[i]] = 1;
                }
            }
        }

        for (int len = 2; len <= n; len++) {
            for (int l = 1; l + len - 1 <= n; l++) {
                int r = l + len - 1;
                for (int x = 0; x < n; x++) {
                    dp[l][r][x] = 0;
                }

                for (int k = l; k <= r; k++) {
                    int must = 0;
                    if (k > l) must++;
                    if (k < r) must++;

                    if (k == l) {
                        if (l + 1 <= r) {
                            for (int x_val = must; x_val < n; x_val++) {
                                int inside = x_val - must;
                                if (inside < 0 || inside >= n) continue;
                                long long ways = dp[l+1][r][inside];
                                if (s[k] == -1 || s[k] == x_val) {
                                    dp[l][r][x_val] = (dp[l][r][x_val] + ways) % mod;
                                }
                            }
                        } else {
                            if (must == 0) {
                                int x_val = 0;
                                if (s[k] == -1 || s[k] == x_val) {
                                    dp[l][r][x_val] = (dp[l][r][x_val] + 1) % mod;
                                }
                            }
                        }
                    } else if (k == r) {
                        if (l <= r - 1) {
                            for (int x_val = must; x_val < n; x_val++) {
                                int inside = x_val - must;
                                if (inside < 0 || inside >= n) continue;
                                long long ways = dp[l][r-1][inside];
                                if (s[k] == -1 || s[k] == x_val) {
                                    dp[l][r][x_val] = (dp[l][r][x_val] + ways) % mod;
                                }
                            }
                        } else {
                            if (must == 0) {
                                int x_val = 0;
                                if (s[k] == -1 || s[k] == x_val) {
                                    dp[l][r][x_val] = (dp[l][r][x_val] + 1) % mod;
                                }
                            }
                        }
                    } else {
                        vector<long long> tmp(n, 0);
                        for (int inside = 0; inside < n; inside++) {
                            for (int x1 = 0; x1 <= inside; x1++) {
                                int x2 = inside - x1;
                                long long left_val = 0;
                                if (l <= k-1) {
                                    if (x1 < n) {
                                        left_val = dp[l][k-1][x1];
                                    } else {
                                        left_val = 0;
                                    }
                                } else {
                                    left_val = (x1 == 0) ? 1 : 0;
                                }
                                long long right_val = 0;
                                if (k+1 <= r) {
                                    if (x2 < n) {
                                        right_val = dp[k+1][r][x2];
                                    } else {
                                        right_val = 0;
                                    }
                                } else {
                                    right_val = (x2 == 0) ? 1 : 0;
                                }
                                tmp[inside] = (tmp[inside] + left_val * right_val) % mod;
                            }
                        }

                        for (int x_val = must; x_val < n; x_val++) {
                            int inside = x_val - must;
                            if (inside < 0 || inside >= n) continue;
                            long long ways = tmp[inside] % mod;
                            if (s[k] == -1 || s[k] == x_val) {
                                dp[l][r][x_val] = (dp[l][r][x_val] + ways) % mod;
                            }
                        }
                    }
                }
            }
        }

        long long ans = 0;
        for (int x = 0; x < n; x++) {
            ans = (ans + dp[1][n][x]) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}

