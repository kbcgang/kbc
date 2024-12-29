///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
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
    kien n;
    cin >> n;
    kien a[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    sort(a + n, a + 2 * n, greater<kien>());
    for (int i = 0; i < 2 * n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
