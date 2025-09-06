/// Hãy làm Sư tử, đừng làm Nai.
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
kien maxx, minn, vtr, ans, l, r;
stack <int> st;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        while (!st.empty() and a[st.top()] < a[i]) st.pop();
        if (st.empty()) ans += i - 1;
        else {
            ans += i - 1 - st.top();
        }
        st.push(i);
    }
    while (!st.empty()) {
        st.pop();
    }
    for (int i = n; i >= 1; i--) {
        while (!st.empty() and a[st.top()] < a[i]) st.pop();
        if (st.empty()) ans += n - i;
        else {
            ans += st.top() - i - 1;
        }
        st.push(i);
    }
    cout << ans;
}
