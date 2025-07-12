///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000],c, r;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> r >> c;
    if (r % 2 == 0)
    {
        k = r / 2 - 1;
        m = 10 * k;
        f[1] = 1, f[2] = 3, f[3] = 5, f[4] = 7, f[5] = 9;
        cout << m + f[c];
    }
    else
    {
        k = r / 2;
        m = 10 * k;
        f[1] = 0, f[2] = 2, f[3] = 4, f[4] = 6, f[5] = 8;
        cout << m + f[c];
    }
}