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

void buildLPS(const string &pat, vector<int> &lps) {
    int len = pat.size();
    lps.resize(len);
    lps[0] = 0; 

    int ktr = 0; 
    for (int i = 1; i < len; i++) {
        while (ktr > 0 && pat[i] != pat[ktr]) {
            ktr = lps[ktr - 1];
        }
        if (pat[i] == pat[ktr]) {
            ktr++;
        }
        lps[i] = ktr;
    }
}

kien countOccurrences(const string &text, const string &pattern) {
    int n = text.size();
    int m = pattern.size();
    if (m > n) return 0;

    vector<int> lps;
    buildLPS(pattern, lps);

    int cnt = 0;
    int i = 0, j = 0;
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
            if (j == m) {
                cnt++;
                j = lps[j - 1]; 
            }
        } else {
            if (j > 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return cnt;
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string B, A;
    getline(cin, B);
    getline(cin, A);
    kien ans = countOccurrences(A, B);
    cout << ans;
    return 0;
}
