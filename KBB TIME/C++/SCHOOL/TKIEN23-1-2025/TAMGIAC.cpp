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

bool check(kien a, kien b, kien c)
{
    if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
        return 1;
    return 0;
}
kien n, a[Million];

JAV()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> a[1] >> a[2] >> a[3];
        if (check(a[1], a[2], a[3]) == 0)
            cout << 0 << '\n';
        else
        {
            if (a[1] == 90 || a[2] == 90 || a[3] == 90)
                cout << "VUONG" << '\n';
            else if (a[1] > 90 || a[2] > 90 || a[3] > 90)
                cout << "TU" << '\n';
            else
                cout << "NHON" << '\n';
        }
    }
}
