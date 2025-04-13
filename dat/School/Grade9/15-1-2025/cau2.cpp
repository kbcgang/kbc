/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string x, y;
int a[30];
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
    cin >> x >> y;
    for (int i = 0; i < x.size(); i++)
        if (a[x[i] - 97] == 0)
            a[x[i] - 97]++;
    for (int i = 0; i < y.size(); i++)
        if (a[y[i] - 97] == 1)
            a[y[i] - 97]++;
    for (int i = 0; i < 26; i++)
        if (a[i] == 2)
            cout << char(i + 97) << "\n";
}