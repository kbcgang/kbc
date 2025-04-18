/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

JAV()
{
    string S, T;
    cin >> S >> T;
    int n = S.length();
    for (int k = 0; k < n; k++)
    {
        string S_k = S.substr(k) + S.substr(0, k);
        string T_k = T.substr(k) + T.substr(0, k);

        if (S_k > T_k)
        {
            cout << k << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
