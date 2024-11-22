/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int x, y;
int k;
string s;
bool save = 1;
bool check(int x1, int y1)
{
    if(x1==x&&y==y1)
    return 1;
    if (x == x1)
    {
        if (y + 1 == y1 || y - 1 == y1)
            return 1;
    }
    if (y == y1)
    {
        if (x + 1 == x1 || x - 1 == x1)
            return 1;
    }
    if (x + 1 == x1)
    {
        if (y + 1 == y1 || y - 1 == y1)
            return 1;
    }
    if (x - 1 == x1)
        if (y + 1 == y1 || y - 1 == y1)
            return 1;
    return 0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int x1=0, y1=0;
    cin >> x >> y >> k >> s;
    if (check(x1,y1))
    {
        cout << 0 << "\n";
        save = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
            x1++;
        if (s[i] == 'L')
            x1--;
        if (s[i] == 'U')
            y1++;
        if (s[i] == 'D')
            y1--;
        if (check(x1, y1))
        {
            cout << i + 1 << "\n";
            save = 0;
        }
    }
    if (save)
        cout << -1;
}