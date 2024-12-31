/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

int main()
{
    string S1, S2;
    cin >> S1 >> S2;

    if (S1 > S2)
    {
        cout << -1;
    }
    else if (S1 == S2)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }

    return 0;
}
