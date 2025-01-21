///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n, a[100005], m, ans;
int ChatGPT()
{
    int l = 1, r = *max_element(a, a + m);
    while (l <= r)
    {
        int mid = (l + r) / 2;
        kien kids = 0;
        for (int i = 0; i < m; i++)
            kids += a[i] / mid;
        if (kids >= n)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return r+1;
}
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int res = ChatGPT();
    cout << res;
}