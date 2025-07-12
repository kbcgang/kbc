///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

void sub1(int n) {
    vector<int> f;
    for (int d = 1; d <= n; d++) if (n % d == 0) f.push_back(d);
    sort(f.begin(), f.end());
    cout << f.size() << '\n';
    for (int d : f) {
        cout << d << " 1\n";
    }
}

void sub2(int n, vector<int>& a) {
    vector<int> f;
    for (int d = 1; d <= n; d++) if (n % d == 0) f.push_back(d);
    sort(f.begin(), f.end());
    cout << f.size() << '\n';
    for (int d : f) {
        int m = n / d;
        int minn = INT_MAX;
        for (int i = 0; i < n; i += d) {
            bool ktr[3] = {false};
            int dem = 0;
            for (int j = i; j < i + d; ++j) {
                if (!ktr[a[j]]) {
                    ktr[a[j]] = true;
                    dem++;
                }
            }
            minn = min(minn, dem);
        }
        cout << d << " " << minn << '\n';
    }
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    bool check = true;
    for (int i = 1; i < n; i++) if (a[i] != a[0]) { check = false; break; }
    if (check && n <= 100) {
        sub1(n);
    } else if (n <= 100 && *max_element(a.begin(), a.end()) <= 2) {
        sub2(n, a);
    } else {
        cout << 0;
    }
    return 0;
}
