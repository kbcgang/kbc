#include <bits/stdc++.h>
using namespace std;

string gg(string s) {
    int n = s.length();
    int l = 0, r = 0, kq = 0;
    unordered_map<char, int> mid;

    for (int ketThuc = 0; ketThuc < n; ketThuc++) {
        char now = s[ketThuc];
        if (mid.find(now) != mid.end() && mid[now] >= l) {
            l = mid[now] + 1;
        }
        mid[now] = ketThuc;
        if (ketThuc - l + 1 > r) {
            r = ketThuc - l + 1;
            kq = l;
        }
    }
    return s.substr(kq, r);
}

int main() {
    int t;

    cin >> t;
    cin.ignore();

    vector<string> e(t);
    for (int i = 0; i < t; i++) {
        getline(cin, e[i]);
    }

    for (int i = 0; i < t; i++) {
        string s = e[i];
        string k = "";
        string w = "";
        for (int j = 0; j <= s.length(); j++) {
            if (j == s.length() || s[j] == ' ') {
                if (!w.empty()) {
                    string u = gg(w);
                    if (u.length() > k.length()) {
                        k = u;
                    }
                    w = "";
                }
            } else {
                w += s[j];
            }
        }
        cout << k << endl;
    }

    return 0;
}