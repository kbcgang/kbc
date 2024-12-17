/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// https://bachlieu.ntucoder.net/Problem/Details/6752
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,m = 1, dem = 9, l = 1, r;
kien ans;
string s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    m = 1, dem = 9, l = 1;
    while (n > m * dem)
    {
        n -= m * dem;
        m++;
        dem *= 10;
        l *= 10;
    }
    ans = l + (n - 1) / m;
    s = to_string(ans);
    cout << s[(n - 1) % m] << endl;
}
