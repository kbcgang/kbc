/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> m >> n;
    int a[105][105];
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) 
    {
        int min_val = a[i][0], min_col = 0;
        int max_val = a[i][0], max_col = 0;
        for (int j = 1; j < n; j++) 
        {
            if (a[i][j] < min_val) 
            {
                min_val = a[i][j];
                min_col = j;
            }
            if (a[i][j] > max_val) 
            {
                max_val = a[i][j];
                max_col = j;
            }
        }
        cout << min_val << " " << min_col << " " << max_val << " " << max_col << "\n";
    }
}

