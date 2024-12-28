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
    double a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a + b > c && b + c > a && c + a > b)
        {
            break;
        }
    }

    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    double h1 = (2 * area) / a;
    double h2 = (2 * area) / b;
    double h3 = (2 * area) / c;
    double maxHeight = max({h1, h2, h3});
    cout << fixed << setprecision(3) << maxHeight << endl;

    return 0;
}
