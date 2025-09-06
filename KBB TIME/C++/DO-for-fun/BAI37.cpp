#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int K;
    string S;
    cin >> K;
    cin.ignore(); // bỏ qua ký tự newline sau K
    getline(cin, S); // đọc cả dòng có thể có khoảng trắng

    int n = S.length();
    int dp[201][201][21] = {};  // dp[i][open][depth]
    dp[0][0][0] = 1;

    for (int i = 0; i < n; ++i) {
        char c = S[i];
        for (int open = 0; open <= n; ++open) {
            for (int d = 0; d <= K; ++d) {
                int val = dp[i][open][d];
                if (val == 0) continue;

                // Chọn '('
                if (c == '(' || c == '?') {
                    dp[i + 1][open + 1][d] = (dp[i + 1][open + 1][d] + val) % MOD;
                }

                // Chọn ')'
                if ((c == ')' || c == '?') && open > 0) {
                    for (int inner = 0; inner <= d; ++inner) {
                        dp[i + 1][open - 1][max(d, inner + 1)] =
                            (dp[i + 1][open - 1][max(d, inner + 1)] + dp[i][open][inner]) % MOD;
                    }
                }
            }
        }
    }

    cout << dp[n][0][K] << endl;
    return 0;
}
