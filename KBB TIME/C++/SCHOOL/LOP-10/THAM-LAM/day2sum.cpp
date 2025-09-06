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
int a[5005];
kien ps[5005];

JAV() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
        ps[i] = ps[i - 1] + a[i];
    }

    int maxx = 0;
    for (int i = 1; i <= N - 1; i++) {
        unordered_set<kien> pp;
        pp.reserve(N);
        pp.max_load_factor(0.7f);

        kien S0 = ps[i - 1];
        for (int k = i + 1; k <= N; k++) {
            pp.insert(2 * ps[k - 1]);

            kien val = ps[k] + S0;
            if (val % 2 == 0) {
                if (pp.find(val) != pp.end()) {
                    int doDai = k - i + 1;
                    if (doDai > maxx) {
                        maxx = doDai;
                    }
                }
            }
        }
    }

    cout << maxx;
    return 0;
}

