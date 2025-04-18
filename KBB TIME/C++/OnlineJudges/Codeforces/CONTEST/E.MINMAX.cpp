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

bool ktr(int x, vector<int>& a, int k) {
    int count = 0;
    unordered_set<int> seen;
    for (int v : a) {
        if (v < x) seen.insert(v);
        if (seen.size() == x) {
            count++;
            seen.clear();
        }
    }
    return count >= k;
}

int maxx(vector<int>& a) {
    unordered_set<int> s(a.begin(), a.end());
    for (int i = 0; ; ++i)
        if (!s.count(i)) return i;
}

JAV() 
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin >> t;
    while (t--) 
    {
        int n, k; 
        cin >> n >> k;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        int lo = 0, hi = maxx(a), ans = 0;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (ktr(mid, a, k)) 
            {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans << "\n";
    }
}
