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
int t, n, a[Million];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) 
    {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int res = 0;
        for (int i = 0; i < n;) 
        {
            int j = i;
            while (j + 1 < n && a[j + 1] == a[i]) 
            {
                ++j;
            }
            kien giaTriDinh = a[i];
            bool ktr  = (i == 0) || (a[i - 1] < giaTriDinh);
            bool ktr1  = (j == n - 1) || (a[j + 1] < giaTriDinh);

            if (ktr and ktr1) 
           	{
                res++;
            }
            i = j + 1;
        }

        cout << res << "\n";
    }

    return 0;
}
