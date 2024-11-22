/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
string s;
char ans;
int dem[260];
int m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Xuathien.inp", "r"))
    {
        freopen("Xuathien.inp", "r", stdin);
        freopen("Xuathien.out", "w", stdout);
    }
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        dem[s[i]]++;
    }
    for (int i = '0'; i <= '9'; i++)
    {
        if (dem[i] >= m)
        {
            ans = i;
            m = dem[i];
        }
    }
    cout << ans;
}