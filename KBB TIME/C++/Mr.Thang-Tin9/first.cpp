/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, a[1000000];
kien maxx, minn, vtr, ans, l, r, st[1000000][20];
pair <kien, kien> f[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }
    stack <kien> st;
    f[1].first = -1;
    st.push(1);
    for (int i = 2; i <= n; i++) {
        while (!st.empty() and a[st.top()] <= a[i]) {
            st.pop();
        }
        ans = -1;
        if (!st.empty()) {
            ans = st.top();
        }
        f[i].first = ans;
        st.push(i);
    }
    f[1].second = -1;
    stack <kien> change;
    st.swap(change);
    st.push(n);
    for (int i = n; i >= 2; i --) {
        while (!st.empty() and a[st.top()] <= a[i]) {
            st.pop();
        }
        ans = -1;
        if (!st.empty()) {
            ans = st.top();
        }
        f[i].second = ans;
        st.push(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << f[i].first << " " << f[i].second << "\n";
    } 
}
    