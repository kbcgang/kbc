#include <bits/stdc++.h>
#define pii pair<int, int>
#define fi first
#define se second
#define int long long
using namespace std;
const int MOD = 1e9 + 7;
int t;
int calc(int p) {
    int s = 0;
    if(p % 2 == 1)
        return 0;
    p = p / 2;
    for(int m = sqrt(p / 2); m <= sqrt(p); m++)
        if(p % m == 0) {
            int n = p / m - m;
            s = max(s, (m * m - n * n) * m * n);
        }
    return s;
}
int solve(int p) {
    int res = 0;
    for(int i = 1; i <= sqrt(p); i++)
        if(p % i == 0) {
            if(p % 2 == 1)
                continue;
            else
                res = max(res, i * i * calc(p / i));
        }
    return res;
}
int32_t main() {
    cin >> t;
    while(t--) {
        int p;
        cin >> p;
        cout << solve(p) << '\n';
    }
}
/*
6
12
36
112
3344
888888
20
*/