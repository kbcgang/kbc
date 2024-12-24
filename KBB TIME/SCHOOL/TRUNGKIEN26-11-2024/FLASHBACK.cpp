///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    f[0] = n;
    for (int i = 1; i <= k; i++)
    {
        f[i] = (f[i-1] % MOD + m %MOD);
        m = m % MOD;
        m  += f[i] % MOD;
    }
    cout << f[k] % MOD + m % MOD;
    /*
    4 4 4 4 4 = 5x4
    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 = 15x1
    1 1 1 1 1 1 1 1 1 1 = 10x1
    2 2 2 2 2 2 2 2 2 2 = 10x2
    3 3 3 3 3 = 5x3
    1 1 1 1 1 1 1 1 1 1 = 10x1
    2 2 2 2 2 = 5x2
    1 1 1 1 1 = 5x1

    Day 0:
        1 1 1 1 1 = 5x1
    Day 1:
        2 2 2 2 2 = 5x2
        1 1 1 1 1 = 5x1
    Day3:
        3 3 3 3 3 = 5x3
        2 2 2 2 2 = 5x2   ///
        1 1 1 1 1 1 1 1 1 1 = 10x1
        1 1 1 1 1 = 5x1   ///
    Day 4:
        4 4 4 4 4 = 5x4
        3 3 3 3 3 = 5x3
        2 2 2 2 2 = 5x2
        1 1 1 1 1 = 5x1
        1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 = 15x1
        2 2 2 2 2 2 2 2 2 2 = 10x2
        1 1 1 1 1 1 1 1 1 1 = 10x1
    */
}