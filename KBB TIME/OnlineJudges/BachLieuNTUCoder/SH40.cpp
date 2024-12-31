/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

int main()
{
    kien p, n, k;
    cin >> p >> n >> k;
    kien sum = k * (n * (n + 1)) / 2;
    if (p >= sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO" << endl;
        cout << (sum - p);
    }

    return 0;
}
