#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c;
main()
{
    if (fopen("tamgiac.inp", "r"))
    {
        freopen("tamgiac.inp", "r", stdin);
        freopen("tamgiac.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b || b == c || a == c)
        {
            if (a * a + b * b == c * c)
            {
                cout << 1.0 * a * b / 2 << " " << 1.0 * (a + b + c);
                cout << "\nTam giac vuong can";
            }
            else if (b * b + c * c == a * a)
            {
                cout << 1.0 * c * b / 2 << " " << 1.0 * (a + b + c);
                cout << "\nTam giac vuong can";
            }
            else if (a * a + c * c == b * b)
            {
                cout << 1.0 * a * c / 2 << " " << 1.0 * (a + b + c);
                cout << "\nTam giac vuong can";
            }
            else
            {
                double p = 1.0 * (a + b + c) / 2;
                cout << 1.0 * sqrt(p * (p - a) * (p - b) * (p - c)) << " " << 1.0 * (a + b + c);
                cout << "\nTam giac can";
            }
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            if (a * a + b * b == c * c)
            {
                cout << 1.0 * a * b / 2 << " " << 1.0 * (a + b + c);
                cout << "\nTam giac vuong";
            }
            else if (b * b + c * c == a * a)
            {
                cout << 1.0 * c * b / 2 << " " << 1.0 * (a + b + c);
                cout << "\nTam giac vuong";
            }
            else if (a * a + c * c == b * b)
            {
                cout << 1.0 * a * c / 2 << " " << 1.0 * (a + b + c);
                cout << "\nTam giac vuong";
            }
        }
        else if (a == b && b == c)
        {
            cout << 1.0 * sqrt(1.0 * (a * a - (a / 2) * (a / 2))) * a / 2 << " " << 1.0 * (a + b + c);
            cout << "\nTam giac deu";
        }
        else
        {
            double p = 1.0 * (a + b + c) / 2;
            cout << 1.0 * sqrt(p * (p - a) * (p - b) * (p - c)) << " " << 1.0 * (a + b + c);
            cout << "\nTam giac thuong";
        }
    }
    else
        cout << "Khong phai ba canh tam giac";
}