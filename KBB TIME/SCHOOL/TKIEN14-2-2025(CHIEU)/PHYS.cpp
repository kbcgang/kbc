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

struct Node {
    kien left, right, value;
};

Node a[100005];

JAV() {
    kien n, ans = 0;
    cin >> n;

    if (n == 2) {
        cout << 1;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i].value;
    }

    for (int i = 0; i < n; i++) {
        kien trai = 0, phai = 0;
        bool fi = true;

        for (int j = 0; j < n; j++) {
            if (i == j) {
                fi = false;
                continue;
            }
            if (fi && a[i].value < a[j].value) trai++;
            else if (!fi && a[i].value > a[j].value) phai++;
        }
        a[i].left = trai;
        a[i].right = phai;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans += max(max(a[i].value, a[j].value) - min(a[i].value, a[j].value), 
                           j - i + max(a[i].left, a[j].right));
        }
    }

    cout << ans;
    return 0;
}