#include <bits/stdc++.h>
using namespace std;

int ask(const vector<int>& idx) {
    cout << "? " << idx.size();
    for (int i : idx) cout << ' ' << i;
    cout << endl;
    cout.flush();

    int res;
    cin >> res;
    return res;
}

void solve_case(int n) {
    vector<int> type(n + 1, -1); // 0: ')', 1: '('

    // Cố gắng tìm vị trí của từng dấu '(' và ')'
    for (int i = 1; i <= n; ++i) {
        vector<int> v = {i};
        int val = ask(v);
        if (val == 0) type[i] = 0; // ')'
        else type[i] = 1; // '('
    }

    string result = "";
    for (int i = 1; i <= n; ++i) {
        result += (type[i] ? '(' : ')');
    }

    cout << "! " << result << endl;
    cout.flush();
}
#define JAV main
JAV() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve_case(n);
    }

    return 0;
}

