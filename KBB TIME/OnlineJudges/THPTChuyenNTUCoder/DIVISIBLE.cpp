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
kien L, R;

kien check_4() {
    kien x = L / 4;
    kien y = R / 4;
    if (L % 4 != 0) x++;
    return y - x + 1;
}

kien check_7() {
    kien x = L / 7;
    kien y = R / 7;
    if (L % 7 != 0) x++;
    return y - x + 1;
}

kien check_11() {
    kien x = L / 11;
    kien y = R / 11;
    if (L % 11 != 0) x++;
    return y - x + 1;
}

kien check_28() {
    kien x = L / 28;
    kien y = R / 28;
    if (L % 28 != 0) x++;
    return y - x + 1;
}

kien check_77() {
    kien x = L / 77;
    kien y = R / 77;
    if (L % 77 != 0) x++;
    return y - x + 1;
}

kien check_44() {
    kien x = L / 44;
    kien y = R / 44;
    if (L % 44 != 0) x++;
    return y - x + 1;
}

kien check_308() {
    kien x = L / 308;
    kien y = R / 308;
    if (L % 308 != 0) x++;
    return y - x + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> L >> R;
        cout << check_4() + check_7() + check_11() - check_28() - check_44() - check_77() + check_308() << endl;
    }
    return 0;
}
