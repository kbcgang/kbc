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
kien n, a[Million + 5], st[Million + 5], top;
kien maxx, minn ,vtr;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (kien i = 0; i < n; i++) {
        cin >> a[i];
    }
    top = -1;
    for (kien i = 0; i <= n; i++) {
        while (top >= 0) {
            bool ktr;
            if (i == n) {
                ktr = true;
            } else {
                if (a[i] < a[st[top]]) {
                    ktr = true;
                } else {
                    ktr = false;
                }
            }
            if (ktr == false) {
                break;
            }
            int vtr = st[top];
            top--;
            kien left;
            if (top < 0) {
                left = 0;
            } else {
                left = (kien)st[top] + 1;
            }
            kien width = i - left;
            kien area = a[vtr] * width;
            if (area > maxx) {
                maxx = area;
            }
        }
        st[++top] = (int)i;
    }
    cout << maxx;
    return 0;
}

