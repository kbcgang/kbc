///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a, b, c, minn, maxx;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Cau1a.INP", "r"))
    {
        freopen("Cau1a.INP", "r", stdin);
        freopen("Cau1a.OUT", "w", stdout);
    }
    cin >> a >> b >> c;
    minn = min(min(a,b),c);
    maxx = max(max(a,b),c);
    cout << minn/__gcd(minn,maxx) + maxx/__gcd(minn,maxx);
}
