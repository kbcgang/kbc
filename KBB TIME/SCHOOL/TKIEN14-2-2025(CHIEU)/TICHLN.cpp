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
using namespace std;
kien a, b, c, ar[10000007];

JAV()
{
    cin >> a >> b >> c;
    ar[0] = a;
    ar[1] = b;
    ar[2] = c;
    sort(ar, ar + 3);
    cout << ar[1] * ar[2];
}

