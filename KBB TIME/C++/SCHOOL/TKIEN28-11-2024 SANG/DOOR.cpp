#include <bits/stdc++.h>
using namespace std;
int n, a, b, m, k;
bool nt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}
void tinh()
{
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (nt(a) && a >= b)
        {
            cout << a - b << endl;
        }
        else if (nt(a) && a < b)
        {
            cout << (((b / a) + 1) * a) - b << endl;
        }
        else
        {
            if (__gcd(a, b) > 1)
            {
                cout << 0 << endl;
            }
            else
            {
                for (int j = 1;; j++)
                {
                    if (__gcd(a, b + j) > 1)
                    {
                        cout << j << endl;
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tinh();

    return 0;
}