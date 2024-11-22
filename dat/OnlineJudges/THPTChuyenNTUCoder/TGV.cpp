#include <bits/stdc++.h>
#define int long long
using namespace std;
int t, a, b, c;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b + c == 180)
        {
            if (a != 0 && b != 0 && c != 0)
            {
                if (a == 90 || b == 90 || c == 90)
                {
                    cout << "YES\n";
                }
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
}