#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n;
kien factorial(kien n)
{
    kien result = 1;
    for(kien i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

double S(kien n, double x)
{
    double sum = 1 + x;
    for(kien i = 1; i <= n; ++i)
    {
        kien exp = 2 * i + 1;
        double term = pow(x, exp) / factorial(exp);
        sum += term;
    }
    return sum;
}

int main()
{
    if(fopen("Cau1b.inp", "r")) {
        freopen("Cau1b.inp", "r", stdin);
        freopen("Cau1b.out", "w", stdout);
    }
    double x;
    cin >> n;
    cin >> x;
    double result = S(n, x);
    cout << fixed << setprecision(3) << result << endl;
    return 0;
}
