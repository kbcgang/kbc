/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

bool ktr(kien n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (kien i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool check(string s, int k) {
    if ((kien)s.size() * k > 18) {
        for (char c : s)
            if ((c - '0') % 2 == 0 || c == '5')
                return false;
        if (s == "1") return false; 
        return true; 
    }
    string total = "";
    for (int i = 0; i < k; i++) total += s;
    kien num = stoll(total); 

    return ktr(num);
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--) {
    //     string s;
    //     int k;
    //     cin >> s >> k;
    //     cout << (check(s, k) ? "YES\n" : "NO\n");
    // }
    kien t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        cout << check(s,k) ? "YES\n" : "NO\n";
            
    }
}
