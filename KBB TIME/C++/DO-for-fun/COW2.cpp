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

JAV() {
    kien n, k;
    cin >> n >> k;
    kien a[NT];
    for (kien i = 1; i <= n; i++) {
        cin >> a[i];
    }

    multiset<kien> st;
    multiset<kien>::iterator it;
    kien max_median = -1e18;

    for (kien i = 1; i <= n; i++) {
        st.insert(a[i]);

        if (i > k) {
            st.erase(st.find(a[i - k]));
        }

        if (i >= k) {
            it = st.begin();
            for (kien j = 1; j < (k + 1) / 2; j++) {
                it++;
            }
            kien median = *it;
            if (median > max_median) {
                max_median = median;
            }
        }
    }

    cout << max_median;
    return 0;
}
