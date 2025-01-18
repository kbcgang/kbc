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
kien a,b,x,y, xy;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> x >> y;
    xy = (x*y)/__gcd(x,y);
    cout << (b / x - (a - 1) / x) + (b / y - (a - 1) / y) - (b / xy - (a - 1) / xy);
}