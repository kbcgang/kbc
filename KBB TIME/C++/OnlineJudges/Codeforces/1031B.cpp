/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--) {
        kien w, h, a, b;
        cin >> w >> h >> a >> b;
        kien x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        kien dim[2]   = { a, b };
        kien first[2] = { x1, y1 };
        kien second[2]= { x2, y2 };
        bool ok = true;
        for (int i = 0; i < 2; i++) {
            kien L1 = first[i];
            kien R1 = first[i] + dim[i] - 1;
            kien L2 = second[i];
            kien R2 = second[i] + dim[i] - 1;
            if (max(L1, L2) <= min(R1, R2)) {
                int other = 1 - i;
                if (llabs(first[other] - second[other]) % dim[other] != 0) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            if (llabs(x1 - x2) % a != 0 and llabs(y1 - y2) % b != 0) {
                ok = false;
            }
        }

        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
