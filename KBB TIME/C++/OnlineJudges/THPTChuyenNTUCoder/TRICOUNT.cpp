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
int N;
JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    static int a[200005];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N);
    kien ans = 0;
    for (int k = N - 1; k >= 2; k--) {
        int i = 0, j = k - 1;
        while (i < j) {
            if ( (long long)a[i] + a[j] > a[k] ) {
                ans += (j - i);
                j--;
            } else {
                i++;
            }
        }
    }
    cout << ans;
    return 0;
}
