/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define MOD 1000000007
unordered_map<kien,int> pp;                
unordered_map<kien, vector<kien>> vtr;    
kien a[Million + 5], pre[Million + 5], f[Million + 5], n;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    cin >> n;
    pp[0] = 1;     
    vtr[0].push_back(0);
    kien ans = 0;
    for (kien i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
        if (a[i] < 0) {
            f[i] = f[i-1] - 1;
        } else {
            f[i] = f[i-1] + 1;
        }
        if (pp[f[i]] > 0) {
            for (auto j : vtr[f[i]]) {
                ans = max(ans, pre[i] - pre[j]); 
            }
        }
        pp[f[i]]++;
        vtr[f[i]].push_back(i);
    }
    cout << ans << "\n";
    return 0;
}
