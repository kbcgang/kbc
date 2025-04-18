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
kien a, b, c;

kien POWER(kien a, kien b, kien c)
{
    kien ans = 1;
    a = a % c;

    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % c;
        }
        a = (a * a) % c;
        b = b / 2;
    }

    return ans;
}

int main()
{
    cin >> a >> b >> c;
    if (c == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << POWER(a, b, c) << endl;
    }

    return 0;
}
