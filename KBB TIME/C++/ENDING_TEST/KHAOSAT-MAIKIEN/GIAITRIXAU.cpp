/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

JAV() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    kien N;
    long long C;
    cin >> N >> C;
    string S;
    cin >> S;
    kien res = 0;
    kien value = 0;
    kien count_a = 0;
    int l = 0;

    for (int r = 0; r < N; ++r) {
        if (S[r] == 'a') {
            count_a++;
        } else if (S[r] == 'b') {
            value += count_a;
        }

        while (value > C) {
            if (S[l] == 'a') {
                count_a--;
                value -= (count(S.begin() + l + 1, S.begin() + r + 1, 'b'));
            } else if (S[l] == 'b') {
            }
            l++;
        }

        res = max(res, 1LL * (r - l + 1));
    }

    cout << res << '\n';
    return 0;
}
