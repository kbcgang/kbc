///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien l,r,a,b, bcnn;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI01.INP", "r"))
    {
        freopen("BAI01.INP", "r", stdin);
        freopen("BAI01.OUT", "w", stdout);
    }
    cin >> l >> r >> a >> b;
    bcnn = a*b/__gcd(a,b);
    cout << r/bcnn - l / bcnn;
}