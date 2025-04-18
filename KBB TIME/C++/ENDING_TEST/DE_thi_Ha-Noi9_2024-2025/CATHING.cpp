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

JAV()
{
    if (fopen("CATHINH.inp","r"))
    {
        freopen("CATHINH.inp", "r", stdin);
        freopen("CATHINH.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien a, b, n;
    cin >> a >> b >> n;
    cout << a*b - n*n*(a / n)*(b/n);
}