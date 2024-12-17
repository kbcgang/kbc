#include <bits/stdc++.h>

using namespace std;

void thong_ke_doi_giai(int n, int k, vector<string>& teams) {
    map<char, int> solved_count;
    for (int i = 0; i < k; ++i) {
        solved_count['A' + i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        for (char problem : teams[i]) {
            solved_count[problem]++;
        }
    }

    for (auto it = solved_count.begin(); it != solved_count.end(); ++it) {
        cout << it->second << " ";
        for (int i = 0; i < it->second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    cin.ignore();
    vector<string> teams(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, teams[i]);
    }
    thong_ke_doi_giai(n, k, teams);

    return 0;
}
