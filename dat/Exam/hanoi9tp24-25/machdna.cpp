/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
int d;
kien()
{
    if (fopen("machdna.inp", "r"))
    {
        freopen("machdna.inp", "r", stdin);
        freopen("machdna.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            while (d--)
            {
                if (s[i] == 'A')
                    cout << 'T';
                else if (s[i] == 'T')
                    cout << 'A';
                else if (s[i] == 'G')
                    cout << 'C';
                else
                    cout << 'G';
            }
            d = 0;
        }
        else
            d = d * 10 + s[i] - 48;
    }
}