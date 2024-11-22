#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int t;
main()
{
    freopen("Cau4.inp", "r", stdin);
    freopen("Cau4.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s.size() < 8)
            cout << "No\n";
        else
        {
            bool chu = 0, so = 0, chuhoa = 0, kitu = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                    so = 1;
                else if (s[i] >= 'a' && s[i] <= 'z')
                    chu = 1;
                else if (s[i] >= 'A' && s[i] <= 'Z')
                    chuhoa = 1;
                else
                    kitu = 1;
            }
            if (chu == 1 && so == 1 && chuhoa == 1 && kitu == 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}