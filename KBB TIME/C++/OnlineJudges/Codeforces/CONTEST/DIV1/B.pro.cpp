/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

JAV() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int m, k;
        cin >> m >> k;
        int trai[1005], phai[1005];
        for (int i = 0; i < m; i++) 
        {
            cin >> trai[i];
        }
        for (int i = 0; i < m; i++) 
        {
            cin >> phai[i];
        }
        int max_safe = 0;
        vector<int> extra(m);
        for (int i = 0; i < m; i++) 
        {
            if (trai[i] >= phai[i]) 
            {
                max_safe += trai[i];
                extra[i] = phai[i];
            } 
            else 
            {
                max_safe += phai[i];
                extra[i] = trai[i];
            }
        }
        sort(extra.begin(), extra.end(), greater<int>());
        kien bonus = 0;
        if (k > 1) {
            for (int i = 0; i < k - 1; i++) bonus += extra[i];
        }

        cout << max_safe + bonus + 1 << '\n';
    }
}
