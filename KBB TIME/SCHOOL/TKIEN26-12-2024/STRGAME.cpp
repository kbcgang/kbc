#include <bits/stdc++.h>
using namespace std;

#define JAV main

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;

    // Sort the string to get the smallest lexicographical order
    sort(s.begin(), s.end());

    // If K == 1, the entire string is the answer
    if (K == 1) {
        cout << s << endl;
        return 0;
    }

    // If K == N, the largest substring is the last character in the sorted string
    if (K == N) {
        cout << s[N - 1] << endl;
        return 0;
    }

    // Distribute the characters into K parts
    vector<string> parts(K);
    for (int i = 0; i < N; ++i) {
        parts[i % K] += s[i];
    }

    // The answer is the largest part among the K parts
    string largest_part = *max_element(parts.begin(), parts.end());

    // Output the smallest possible lexicographical order of the largest substring
    cout << largest_part << endl;

    return 0;
}