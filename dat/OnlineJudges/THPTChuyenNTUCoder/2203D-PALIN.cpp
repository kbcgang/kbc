/// Kiên is unreliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
// bool pos[100000][100000];
void checkodd(string s,int l, int r)
{
    int m = (l + r) / 2;
    int x = m - 1, y = m + 1;
    while (x >= l && y <= r)
    {
        if (s[x] != s[y])
        {
            cout << "NO\n";
            return;
        }
        x--;
        y++;
    }
    cout << "YES\n";
}
void checkeven(string s,int l, int r)
{
    int x = (l + r) / 2;
    int y = x + 1;
    while (x >= l && y <= r)
    {
        if (s[x] != s[y])
        {
            cout << "NO\n";
            return;
        }
        x--;
        y++;
    }
    cout << "YES\n";
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q, l, r;
    cin >> s >> q;
    s=' '+s;
    while (q--)
    {
        cin >> l >> r;
        if (l%2!=r%2)
        {
            checkeven(s,l,r);
        }
        else
        {
            checkodd(s,l,r);
        }
    }
}