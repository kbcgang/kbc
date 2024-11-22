/// Kiên is unreliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string l, s;
string a;
bool m[10];
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI3.inp", "r"))
    {
        freopen("BAI3.inp", "r", stdin);
        freopen("BAI3.out", "w", stdout);
    }
    cin >> l >> s;
    for (int i = 0; i < s.size(); i++)
        {m[s[i] - 48] = 1;
        }
    // for(int i=0;i<=9;i++)
    //     cout<<m[i]<<" ";
    for (int i = l[0] - 48; i >= 0; i--)
        if (m[i] == 0)
        {
            a.push_back(char(i + 48));
            break;
        }
    // cout<<a<<" ";x`
    if (a[0] < l[0])
    {
        for (int i = 1; i < l.size(); i++)
            for (int j = 9; j >= 0; j--)
                if (m[j] == 0)
                {
                    a.push_back(char(j + 48));
                    break;
                }
    }
    else
        for (int i = 1; i < l.size(); i++)
            for (int j = l[i] - 48; j >= 0; j--)
                if (m[j] == 0)
                {
                    a.push_back(char(j + 48));
                    break;
                }
    while (a[0] == '0')
        a.erase(0, 1);
    cout << a;
}