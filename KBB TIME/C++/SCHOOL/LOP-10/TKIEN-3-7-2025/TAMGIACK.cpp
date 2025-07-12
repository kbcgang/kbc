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
kien n, a[10005], change;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    change = 0;
    for (int i = 1; i <= n - 2; i++) {
        int k = i + 2;  
        for (int j = i + 1; j <= n - 1; j++) {
            while (k <= n) {
                if (a[i] + a[j] > a[k]) {
                    k++;
                } 
                else {
                    break;
                }
            }
            if (k - j - 1 > 0) {
                change = change + (k - j - 1);
            }
        }
    }
    cout << change;
    return 0;
}
