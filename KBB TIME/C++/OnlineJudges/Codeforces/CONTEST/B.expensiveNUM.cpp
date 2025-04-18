#include <bits/stdc++.h>
using namespace std;

int sovle(const string& s) {
    int dem = 0;
    int maxx = 0;

    for (char c : s) {
        if (c == '0') {
            dem++;
        } else {
            maxx = max(maxx, dem + 1);
        }
    }

    return s.size() - maxx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << sovle(s) << '\n';
    }

    return 0;
}