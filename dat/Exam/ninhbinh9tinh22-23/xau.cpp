/// Discipline > Motivation
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
map<char, int> dem;
string s;
int b;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (auto i : s)
    {
        dem[i]++;
        b = max(b, dem[i]);
    }
    for (auto a : dem)
        if (a.second == b)
            {cout << a.first << "\n"
                 << b;
            exit(0);}
}