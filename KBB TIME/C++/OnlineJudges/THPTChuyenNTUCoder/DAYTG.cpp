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
kien n, k, m, dem, a[NT + 5];
kien maxx, minn, vtr, ans, l, r, st;


JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    st = 1;
    for (int i = 1 ; i <= n; i++) {
        cin >> a[i];
    }    
    a[0] = INT_MAX;
    for (int i = 2; i <= n; i++) {
        if (a[i] > a[i - 1] and vtr == 0) {
            continue;
        } 
        else if (vtr == 0 and a[i] < a[i-1]) {
            if (a[i-1] > a[i-2]) 
            {vtr = 1; ans = max(ans, i - st);}
            else {vtr = 0; st = i - 1;}
        }
        else if (vtr == 1 and a[i] < a[i-1]) {
            ans = max(ans, i - st);
            continue;
        }
        else if (a[i] > a[i-1]) {
            ans = max(ans, i - st);
            vtr = 0;
            st = i - 2;
        }
    }
    cout << ans;
}
    