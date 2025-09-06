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
int a[1000005];
kien S[1000005];
int dq[1000005], n, L, R;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> L >> R;
    for (int i = 1; i <= n; i = i + 1) {
        cin >> a[i];
    }
    S[0] = 0;
    for (int i = 1; i <= n; i = i + 1) {
        S[i] = S[i - 1] + a[i];
    }
    int dau = 0;
    int cuoi = -1;
    kien ans = LLONG_MIN;
    for (int i = L; i <= n; i = i + 1) {
        int vtr = i - L;
        while (dau <= cuoi and S[dq[cuoi]] >= S[vtr]) {
            cuoi = cuoi - 1;
        }
        cuoi = cuoi + 1;
        dq[cuoi] = vtr;
        int limit = i - R;
        while (dau <= cuoi and dq[dau] < limit) {
            dau = dau + 1;
        }
        kien sum = S[i] - S[dq[dau]];
        if (sum > ans) {
            ans = sum;
        } 
    }
    cout << ans;
    return 0;
}

