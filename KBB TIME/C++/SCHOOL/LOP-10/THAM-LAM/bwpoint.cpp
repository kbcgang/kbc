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
kien a[100000 + 5], b[100000 + 5], n;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    kien i1 = 0, j1 = 0, cnt1 = 0;
    while(i1 < n && j1 < n){
        if(a[i1] < b[j1]){
            cnt1++;
            i1++;
            j1++;
        } else {
            j1++;
        }
    }
    sort(a, a + n, greater<kien>());
    sort(b, b + n, greater<kien>());
    kien i2 = 0, j2 = 0, cnt2 = 0;
    while(i2 < n && j2 < n){
        if(a[i2] > b[j2]){
            cnt2++;
            i2++;
            j2++;
        } else {
            j2++;
        }
    }
    cout << max(cnt1, cnt2) << "\n";
    return 0;
}

