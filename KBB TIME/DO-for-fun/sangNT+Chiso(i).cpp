#include <bits/stdc++.h>
using namespace std;

int dancePair(int n, int k, vector<int> h) {
    sort(h.begin(), h.end());

    vector<int> diff;
    for (int i = 1; i < n; i++) {
        diff.push_back(h[i] - h[i - 1]); 
    }

    sort(diff.begin(), diff.end()); 

    int result = 0;
    for (int i = 0; i < k; i++) {
        result += diff[i]; 
    }

    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    cout << dancePair(n, k, h) << endl;
    return 0;
}
