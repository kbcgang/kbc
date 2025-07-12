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
kien n, p, a[100005];
pair <kien, int> e[100005];
int sum[100005];

JAV(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> p;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        e[i] = make_pair(a[i], i);
    }
    sort(e + 1, e + n + 1);
    sum[n] = e[n].second;
    for(int k = n - 1; k >= 1; k--){
        if (e[k].second > sum[k+1]) 
            sum[k] = e[k].second;
        else 
            sum[k] = sum[k+1];
    }
    int kq = 0;
    for(int i = 1; i <= n; i++){
        kien need = a[i] + p;
        int l = 1, r = n, pos = n + 1;
        while(l <= r){
            int m = (l + r) / 2;
            if (e[m].first >= need) {
                pos = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        if (pos <= n) {
            int j = sum[pos];
            if (j > i) {
                int len = j - i;
                if (len > kq) {
                    kq = len;
                }
            }
        }
    }
    cout << kq;
    return 0;
}
