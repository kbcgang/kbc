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
kien a,b;

kien luythua_ab(kien a, kien b)
{
    if (b == 1)
    {
        return a;
    }
    kien tmp = luythua_ab(a, b / 2);
    tmp = (tmp*tmp) % 100;
    if (b % 2 == 1)
    {
        tmp = (tmp * a) % 100;
    }
    return tmp;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    cout << (luythua_ab(a,b) + luythua_ab(b,a)) % 100;
}